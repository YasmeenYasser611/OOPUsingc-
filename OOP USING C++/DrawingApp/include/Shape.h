#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape
{
    private:
        int color;
    public:
        Shape()
        {
           color=0;
           cout<<"Shapes default constractor"<<endl;
        }
        Shape(int n)
        {
           color=n;
           cout<<"Shapes 1 args constractor"<<endl;
        }
        void SetColor(int n)
        {
            color= n;
        }
        int getColor()
        {
            return color;
        }

};

#endif // SHAPE_H
