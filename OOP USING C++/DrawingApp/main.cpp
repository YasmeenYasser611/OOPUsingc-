#include <iostream>
#include "Picture.h"
using namespace std;

int main()
{
   Picture mypic;
  // Line *LArr;
   //LArr=new Line[2];
   //lArr[0]=Line(Point(420,50), Point(300,300));
   //LArr[1]=Line(40,500,500,400);
   Line lArr[2]={Line(40,500,500,400 , 5), Line(420,50,300,300 , 6)};
   Circle cArr[3]={Circle(50,50,50 , 3), Circle(200,100,100, 2), Circle(420,50,30,1)};
   Rect rArr[2]={Rect(30,40,170,100 , 10), Rect(420,50,500,300 , 20)};
   mypic.SetCircles(3,cArr);
   mypic.SetLines(2,lArr);
   mypic.SetRects(2,rArr);
   //mypic.paint();
   //delete[]lArr;
    return 0;
}
