#ifndef POINT_H
#define POINT_H


class Point
{
    int x ;
    int y;
    public:
        Point()
        {
            x=0;
            y=0;
        }
        Point(int m , int n)
        {
            x=m;
            y=n;
        }
        void setx(int m);
        void sety(int n);
        int getx();
        int gety();
};

#endif // POINT_H
