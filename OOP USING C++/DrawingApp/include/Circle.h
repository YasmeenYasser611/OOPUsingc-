#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle: public Shape
{
    private:
        Point center;
        int redious;
    public:
        Circle():Shape(),center()
        {
            redious=0;
            cout<<"the defult constractor of the circle"<<endl;
        }
        Circle(int m , int n , int r , int colo):Shape(colo),center(m , n)
        {
            redious=r;
            cout <<"the 3 args constractor of the circle"<<endl;
        }
       // void draw();

};

#endif // CIRCLE_H
