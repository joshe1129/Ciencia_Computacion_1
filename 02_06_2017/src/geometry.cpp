#include "geometry.h"
#include <cmath>
#include <iostream>
using namespace std;
PointArray::PointArray (){ // constructor del array de puntos
    size = 0; // tamaño 0
    points = new Point [0]; //arregtlo de puntos
}

PointArray::PointArray( const Point ptsToCopy [], const int toCopySize ) {
    size = toCopySize; // modifica el tamaño
    points = new Point[toCopySize]; // modifica el arreglo de puntos con el tamaño enviado
    for (int i = 0; i < toCopySize; ++i)
        points[i] = ptsToCopy[i]; // copia los valores de una cadena de puntos a otra
}
PointArray::PointArray( const PointArray &other){
    size = other.size; // copia el valor de otro arreglo de punteros
    points = new Point[size]; // modifica el puntero points
    for(int i = 0; i < size; i++)
        points[i] = other.points[i];// copia los valores de un puntero de puntos al puntero de puntos points
}
PointArray::~PointArray (){
    delete [] points;
}
void PointArray::resize( int newSize){
    Point *pts = new Point[newSize ]; // crea otro puntero punto
    int minSize = (newSize > size ? size : newSize);// define un nuevo tamaño y le asigana el tamaño minimo
    for(int i = 0; i < minSize;i++)
        pts[i] = points[i];// copia el arreglo de puntos al nuevo arreglo
    delete [] points; // elimina el arreglo de puntos points
    size = newSize; // redefine el tamaño con el nuevo tamaño
    points = pts; // el puntero del arrglo de puntos points toma el valor del nuevo puntero
}

void PointArray::clear(){
    resize (0); // elimina los elementos del arreglo de puntos modificando su tamaño a 0
}
void PointArray::push_back( const Point &p){
    resize(size + 1); // crea un nuevo puntero para poder modificar el puntero principal con un tamaño nuevo y los mismos datos
    points[size - 1] = p; //  //agrega un punto al final de points
}

void PointArray::insert(const int pos , const Point &p){
    resize(size + 1); // crea un nuevo puntero para poder modificar el puntero principal con un tamaño nuevo y los mismos datos
    for(int i = size - 1; i > pos; i--){
            points[i] = points[i - 1]; // mueve los puntos a la derecha
    }
    points[pos] = p; // agrega un nuevo punto a la poscicion dada
}

void PointArray::remove( const int pos){
    if (pos >= 0 && pos < size){
    for(int i = pos; i < size - 2; i++){
        points[i] = points[i + 1];
    }
    resize(size - 1);
    }
}

Point *PointArray::get( const int pos){
     return pos >= 0 && pos <  size ? points + pos : NULL;
}

const Point *PointArray::get( const int pos) const{
    return pos >= 0 && pos < size ? points + pos : NULL;
}

int Polygon::numPolygons = 0;

Polygon::Polygon( const PointArray &pa) : points(pa){
    ++numPolygons;
}
Polygon::Polygon( const Point pointArr[], const int numPoints):points(pointArr ,numPoints){
    ++ numPolygons;
}

Point constructorPoints[4];
Point *updateConstructorPoints( const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){
    constructorPoints[0] = p1;
    constructorPoints[1] = p2;
    constructorPoints[2] = p3;
    constructorPoints[3] = p4;
    return constructorPoints;
}

Rectangle::Rectangle( const Point &ll, const Point &ur) : Polygon(updateConstructorPoints(ll, Point(ll.getX(), ur.getY() ), ur, Point(ur.getX(), ll.getY() )), 4){}
Rectangle::Rectangle( const int llx , const int lly , const int urx , const int ury) : Polygon(updateConstructorPoints(Point(llx , lly), Point(llx , ury), Point(urx , ury), Point(urx , lly)), 4){}
double Rectangle::area() const {
    int length = points.get(1)->getY() - points.get(0)->getY();
    int width = points.get(2)->getX() - points.get(1)->getX();
    return std::abs((double)length*width);
}
Triangle::Triangle( const Point &a, const Point &b, const Point &c) : Polygon(updateConstructorPoints(a, b, c),3){}
double Triangle::area() const {
    int  dx01 = points.get(0)->getX() - points.get(1)->getX(), dx12 = points.get(1)->getX() - points.get(2)->getX(),  dx20 = points.get(2)->getX() - points.get(0)->getX();
    int dy01 = points.get(0)->getY() - points.get(1)->getY(), dy12 = points.get(1)->getY()- points.get (2)->getY(), dy20 = points.get(2)->getY() - points.get(0)->getY();
    double a = std::sqrt(dx01*dx01 + dy01*dy01), b = std::sqrt(dx12*dx12 + dy12*dy12), c = std::sqrt(dx20*dx20+dy20*dy20);
    double s = (a + b + c) / 2;
    return std::sqrt( s * (s -a) * (s -b) * (s -c) );
}
