#ifndef GEOSHAPE_H
#define GEOSHAPE_H

#include <iostream>

using namespace std;

class Geoshape
{
    protected:
        float dim1;
        float dim2;
    public:
        Geoshape()
        {
            dim1=dim2=0;
            cout<<"default constractor of Geoshapes"<<endl;
        }
        Geoshape(float x)
        {
            dim1=dim2=x;
            cout<<"1 args  constractor of Geoshapes"<<endl;
        }
        Geoshape(float x , float y)
        {
            dim1=x;
            dim2=y;
            cout<<"2 args  constractor of Geoshapes"<<endl;
        }
        void setDim1(float x)
        {
            dim1=x;
        }
        void setDim2(float x)
        {
            dim2=x;
        }
        float getDim1()
        {
            return dim1;
        }
        float getDim2()
        {
            return dim2;
        }
        //pure virtual function
        virtual float calcArea()=0;

};

#endif // GEOSHAPE_H
