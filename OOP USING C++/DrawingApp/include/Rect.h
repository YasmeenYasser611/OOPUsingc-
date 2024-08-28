#ifndef RECT_H
#define RECT_H
#include <iostream>
using namespace std;
#include "Point.h"
#include "Shape.h"
class Rect: public Shape
{
    private:
        Point UL;
        Point LR;
    public:
        Rect(): Shape(),UL(),LR()
        {
            cout<<"the defult constractor of rect "<<endl;
        }
        Rect(int x1 , int y1 , int x2 , int y2 , int colo): Shape(colo), UL(x1,y1),LR(x2,y2)
        {
            cout<<"thr 4 args constractor of thr rects"<<endl;
        }
       // void draw();

};

#endif // RECT_H
