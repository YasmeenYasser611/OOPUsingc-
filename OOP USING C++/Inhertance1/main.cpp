#include <iostream>
#include "Derived.h"
#include "Base.h"
#include "SecondDerived.h"
using namespace std;

int main()
{
    Derived obj1;
    Derived obj2(1,2,3,4);
    Derived obj3;
    SecondDerived obj(1,2,3,4,5);
    Base *pt = &obj3;
    Base b(5,4);
    obj1.setA(3);
    obj1.setB(7);
    obj1.setC(2);
    b.setA(10);
    b.setB(11);
    cout<<"from obj1: a*b= "<<obj1.productAB()<<endl;
    cout<<"from obj1: a*b*c= "<<obj1.productABC()<<endl;
    cout<<"from base: a*b= "<<b.productAB()<<endl;
    cout<<"from obj2: a*b*c*d= "<<obj2.productABCD()<<endl;
    cout <<"overriding test1 "<<b.product()<<endl;
    cout <<"overriding test2 "<<obj2.product()<<endl; //derived will run
     cout <<"overriding test3 "<<obj2.Base::product()<<endl; //base will run
     cout<<"overriding test4 "<<pt -> product()<<endl; //base will run
     cout<<"overriding test5 "<<obj.product()<<endl;

    return 0;
}
