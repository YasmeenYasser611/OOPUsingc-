#ifndef PICTURE_H
#define PICTURE_H
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
class Picture
{
    int cNum;
    int rNum;
    int lNum;
    Circle *Pcircle;
    Rect *Prect;
    Line *Pline;
    public:
        Picture()
        {
            cNum =0;
            rNum=0;
            lNum=0;
            Pcircle=NULL;
            Prect = NULL;
            Pline=NULL;
            cout<<"the defult constractor of pics"<<endl;
        }
        Picture(int cn , int rn , int ln , Circle *pc , Rect *pr , Line *pl)
        {
            cNum =cn;
            rNum=rn;
            lNum=ln;
            Pcircle=pc;
            Prect = pr;
            Pline=pl;
            cout<<"the 6 args  constractor of pics"<<endl;
        }
        void SetCircles(int , Circle*);
        void SetRects(int rn , Rect *rptr);
        void SetLines(int , Line*);
        //void paint();

};

#endif // PICTURE_H
