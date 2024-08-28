#ifndef RECT_H
#define RECT_H

#include "Geoshape.h"
#include <iostream>

using namespace std;

class Rect : public Geoshape
{
    public:
        Rect(float x , float y):Geoshape(x , y)
        {
            cout<<"2 args  constractor of Rect"<<endl;

        }
        Rect(float x):Geoshape(x)
        {
            cout<<"1 args  constractor of Rect"<<endl;

        }
        float calcArea()
        {
            return dim1*dim2;
        }

};

#endif // RECT_H
