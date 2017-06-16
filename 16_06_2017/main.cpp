#include <iostream>
#include <vector>
using namespace std;
template <class T> class Stack;
template <class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1.items.size(); ++i) {
        result.items.push_back(s2.items[i]);
    }
    return result ;
};
template <class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s2;
    for ( unsigned i = 0; i < s2.items.size(); ++i) {
        result.items.push_back(s1.items[i]);
    }
    return result ;
};
/*template <class T>
Stack <T> operator<<(const Stack <t> &s1, const USCurrency &o)
{
output << "$" << o.dollars << "." << o.cents;
return output;
}*/
template <class T>
class Stack{
    friend Stack <T> operator+<>( const Stack<T> &s1 , const Stack <T> &s2);
    friend Stack <T> operator-<>( const Stack<T> &s1 , const Stack <T> &s2);
    vector <T> items ;
    public :
    bool empty() const { return items.empty();}
    void push( const T &item ) { items.push_back( item );}
    T&top() {
        return items.back();
    }
    T pop(){
        T last = items.back();
        items.pop_back ();
        return last;
    }
};
/*template <class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1.items. size (); ++i) {
        result.items.push_back(s2.items [i]);
    }
    return result ;
}*/

int main(){

   Stack<int> stack;

    if (stack.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    stack.push(1);
    cout << stack.top() << " added to stack\n";
    if (stack.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    stack.pop();
    if (stack.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    Stack<int> a, b;
    a.push(1);
    a.push(2);
    b.push(3);
    b.push(4);
    Stack<int> c = a + b;
    while (!c.empty()) {
        cout << c.top() <<' ';
        c.pop();
    }
    cout << "\n";
    Stack<int> x, y;
    x.push(5);
    x.push(6);
    y.push(7);
    y.push(8);
    Stack<int> z = x - y;
    while (!z.empty()) {
        cout << z.top() <<' ';
        z.pop();
    }

    return 0;
}

