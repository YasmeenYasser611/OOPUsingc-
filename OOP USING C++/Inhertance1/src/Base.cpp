#include "Base.h"

int Base::productAB()
{
    return a*b;
}
int Base::product()
{
    return a*b*d;
}
//this function could accept object from type Base or object from type derived
void Base::somefunction(Base t)
{
    t.product();
}
