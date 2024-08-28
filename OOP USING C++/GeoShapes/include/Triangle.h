#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Geoshape.h"
#include <iostream>

using namespace std;

class Triangle : public Geoshape
{
    public:
        Triangle(float b , float h): Geoshape(b,h)
        {
            cout<<"2 args  constractor of Triangle"<<endl;

        }
        float calcArea()
        {
            return 0.5*dim1 * dim2;
        }

};

#endif // TRIANGLE_H
