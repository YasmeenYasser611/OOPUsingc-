#ifndef DERIVED_H
#define DERIVED_H
#include "Base.h"
#include <iostream>

class Derived : public Base
{
    private:
        int c;
    public:
        Derived():Base()
        {
            c=0;
        }
        Derived(int n):Base(n)
        {
            c=n;
        }
        Derived(int x , int y , int m ,int z):Base(x,y, m )
        {
            c=z;
        }
        void setC(int z)
        {
            c=z;
        }
        int getC()
        {
            return c;
        }
        int productABC();
        int productABCD();
        int product();

};

#endif // DERIVED_H
