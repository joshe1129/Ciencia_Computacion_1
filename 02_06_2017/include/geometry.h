#ifndef GEOMETRY_H
#define GEOMETRY_H


class Point{// clase punto
    int x,y;
public:
    Point(int xx = 0,int yy = 0){x = xx; y = yy ;} // constructor de la clase punto
    int getX() const{return x;} // retorna el atributo x de la clase punto
    int getY() const{return y;} // retorna el atributo y de la clase punto
    void setX( const int xx ){x = xx;} // asigna un valor al atributo x de la clase punto
    void setY( const int yy ){y = yy;} // asigna un valor al atributo y de la clase punto

};

class PointArray{ // clase array de puntos
    int size; // variable tamaño
    Point *points; // un puntero de la clase punto
    void resize(int size); //funcion para modificar el tamaño
public:
    PointArray(); // constructor de la clase pointarray
    PointArray( const Point pts[], const int size);//otro constructor que definira un array de puntos y un tamaño
    PointArray( const PointArray &pv);//otro constructor que definira un puntero de la clase pointarray para crear una copia del arreglo
    ~PointArray(); // destructor de la clase pointarray
    void clear();  // funcion para limpiar
    int getSize() const{ return size;} // funcion para obtener el tamaño
    void push_back( const Point &p); // funcion para aumentar el tamaño del arreglo de puntos y agregar un punto al arreglo
    void insert( const int pos, const Point &p); // funcion para insertar un punto al arreglo de puntos
    void remove( const int pos); // funcion para remover un punto del arreglo de puntos
    Point *get( const int pos); // funcion que retorna un puntero de la posicion dada o un puntero nulo
    const Point *get( const int pos)const; //funcion que retorna un puntero de la posicion dada o un puntero nulosin modificar los valores
};
class Polygon{ // class polygon
    protected:
        static int numPolygons; // atributo para definir la cantidad de poligonos
        PointArray points; // arreglo de punteros que se usara para cada poligono
public:
    Polygon( const PointArray &pa ); // constructor de un poligono copia
    Polygon( const Point points[] , const int numPoints ); // constructor del poligono con argumentos de arreglo de puntos y cantidad de puntos
    virtual double area() const = 0;// funcion virtual para calcular el area de un poligono y las subclases la definana para poder ser inicializada
    static int getNumPolygons() { return numPolygons;} //retorna la cantidad de poligonos
    int getNumSides() const { return points.getSize();} // retorna la cantidad de lados de un poligono
    const PointArray *getPoints() const { return &points ;} // retorna un puntero del array de punteros del poligono
    ~Polygon(){ --numPolygons;} // destructor
};
class Rectangle:public Polygon {
    public:
        Rectangle( const Point &a, const Point &b); // constructor de un rectangulo apartir de dos puntos
        Rectangle( const int a, const int b , const int c , const int d);// constructor de rectangulo de 4 enteros
        virtual double area() const ; // modifica el comportamiento de la funcion area::poligono
};
class Triangle:public Polygon{
    public:
        Triangle( const Point &a, const Point &b, const Point &c); // constructor de un triangulo apartir de 3 puntos
        virtual double area() const; // modifica el comportamiento de la funcion area::poligono
};

#endif // GEOMETRY_H
