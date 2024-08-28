#ifndef SQUARE_H
#define SQUARE_H

#include "Rect.h"
#include <iostream>

using namespace std;

class Square : public Rect
{
    public:
        Square(float r):Rect(r)
        {
            cout<<"1 args  constractor of square"<<endl;

        }
        void setSquareDim(float x)
        {
            dim1=dim2 =x;
        }
        float getSquareDim()
        {
            return dim1;
        }
        float calcArea()
        {
            return Rect::calcArea();
        }

};

#endif // SQUARE_H
