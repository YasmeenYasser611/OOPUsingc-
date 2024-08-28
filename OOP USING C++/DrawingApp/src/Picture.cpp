#include "Picture.h"

void Picture::SetLines(int ln , Line *lptr)
{
    lNum=ln;
    Pline= lptr;
}
void Picture::SetRects(int rn , Rect *rptr)
{
    rNum=rn;
    Prect= rptr;
}
void Picture::SetCircles(int cn , Circle *cptr)
{
    cNum=cn;
    Pcircle= cptr;
}
/*
 void Picture::paint()
 {
     int i;
     for (i=0 ; i<lNum ; i++)
     {
         Pline[i].draw();
     }
     for (i=0 ; i<cNum ; i++)
     {
         Pcircle[i].draw();
     }
     for (i=0 ; i<rNum ; i++)
     {
         Prect[i].draw();
     }
 }
*/
