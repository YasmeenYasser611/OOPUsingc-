#include "Derived.h"

int Derived::productABC()
{
    return productAB() * c;
}

int Derived::productABCD()
{
    return productAB() * c * d; // d is protected variable in parent class
}
// method overriding
int Derived::product()
{
    return Base::product()*c;
    //return productAB() * c * d
}
