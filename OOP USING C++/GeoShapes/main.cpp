#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rect.h"
#include "Circle.h"

using namespace std;
float sumAreas(Geoshape *p1 ,Geoshape *p2 ,Geoshape *p3  );
int main()
{
    Triangle t(5,6);
    Rect r(2 , 3);
    Circle c(5);
    Square s(2);
    Geoshape *p1;
    Geoshape *p2;
    Geoshape *p3;
    Geoshape *p4;
    p1 =& t;
    p2 = &r;
    p3 = &c;
    p4 = &s;
    cout<<"the area of Triangle = "<<t.calcArea()<<endl;
    cout<<"the area of Rect = "<<r.calcArea()<<endl;
    cout<<"the area of Circle = "<<c.calcArea()<<endl;
    cout<<"the area of Square = "<<s.calcArea()<<endl;
    //dynamic binding test
    cout<<"the area of Triangle = "<<p1->calcArea()<<endl;
    cout<<"the area of Rect = "<<p2->calcArea()<<endl;
    cout<<"the area of Circle = "<<p3->calcArea()<<endl;
    cout<<"the area of Square = "<<p4->calcArea()<<endl;
    cout<<"the sum  = "<<sumAreas(&c , &s , &t)<<endl;

    return 0;
}
//standalone function
float sumAreas(Geoshape *p1 ,Geoshape *p2 ,Geoshape *p3  )
{
    return p1->calcArea() + p2->calcArea() +p3->calcArea();
}
