#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <iostream>
#include "Shape.h"
using namespace std;

class Line : public Shape
{

    Point start;
    Point End;
    public:
        Line(): Shape(), start(),End()
        {
            cout<<"the default constractor for lines"<<endl ;
        }
        Line(int x1 , int y1 , int x2 , int y2 , int colo): Shape(colo),start(x1,y1),End(x2 , y2)
        {
            cout<<"the 4 args constractor of the lines"<<endl;
        }
       // void draw();

};

#endif // LINE_H
