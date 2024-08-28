#ifndef SECONDDERIVED_H
#define SECONDDERIVED_H
#include "Derived.h"

class SecondDerived : public Derived
{
    private:
        int r;
    public:
        SecondDerived(): Derived()
        {
            r=0;
        }
        SecondDerived(int n): Derived(n)
        {
            r=n;
        }
        SecondDerived(int x , int y , int m , int n, int z): Derived(x, y, m, n )
        {
            r=z;
        }
        void setR(int z)
        {
            r=z;
        }
        int getR()
        {
            return r;
        }
        //overriding
        int product();


};

#endif // SECONDDERIVED_H
