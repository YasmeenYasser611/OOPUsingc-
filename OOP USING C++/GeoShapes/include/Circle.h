#ifndef CIRCLE_H
#define CIRCLE_H

#include "Geoshape.h"
#include <iostream>

using namespace std;

class Circle : public Geoshape
{
    public:
        Circle(float r) : Geoshape(r)
        {
            cout<<"1 args  constractor of circles"<<endl;

        }
        void setRedius(float r)
        {
            dim1 = dim2 = r;
        }
        float getRedius()
        {
            return dim1;
        }
        float calcArea()
        {
            return 22.0/7*dim1* dim2 ;
        }

};

#endif // CIRCLE_H
