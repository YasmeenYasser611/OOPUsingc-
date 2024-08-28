#ifndef BASE_H
#define BASE_H


class Base
{
    private:
        int a;
        int b;
    protected:
        int d;
    public:
        Base()
        {
            a=b=d=0;
        }
        Base(int n)
        {
            a=b=d=n;
        }
        Base(int x , int y)
        {
            a=x;
            b=y;
            d=0;
        }
        Base(int x , int y , int m)
        {
            a=x;
            b=y;
            d=m;
        }
        void setA(int x)
        {
            a=x;
        }
        void setB(int y)
        {
            b=y;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        int productAB();
        int product();
        void somefunction(Base t);



};

#endif // BASE_H
