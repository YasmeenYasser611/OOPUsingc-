#include <iostream>
#include"Complex.h"
#include <cmath>
using namespace std;
int Complex::counter = 0;
void Complex::SetComplex(float r , float i)
{
    real= r;
    imag= i;

}

void Complex::SetComplex(float v)
{
    real=imag= v;

}
void Complex::setImag(float i)
{
    imag= i;
}
void Complex::setReal(float r)
{

real= r;
}
float   Complex::getReal()
{
    return real;
}
float Complex::geImag()
{
    return imag;
}
void Complex::print()
{
    if(imag<0 && real>0)
    {
        cout<<real<<"-"<<fabs(imag)<<"i"<<endl;
    }
    else if(real<0 && imag>0)
    {
        cout<<"-"<<fabs(real)<<"+"<<imag<<"i"<<endl;
    }
    else if(real>0 && imag>0)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    else if(real<0 && imag<0)
    {
        cout<<"-"<<fabs(real)<<"-"<<fabs(imag)<<"i"<<endl;
    }

}
Complex Complex::add(Complex c1 , Complex c2)
{

    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
Complex Complex::Sub(Complex c1 , Complex c2)
{

    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}

Complex addTo(float v , Complex c)
{
    Complex b;
    //b.setReal(c.getReal() + v);
    b.imag = c.imag;
    b.real=c.real + v;
    return b;
}
Complex Complex::operator+(Complex c)
{
    Complex b;
    b.real = real + c.real;
    b.imag = imag + c.imag;
    return b;
}
Complex Complex::operator+(float x)
{
    Complex b;
    b.real = real + x;
    b.imag = imag ;
    return b;
}

Complex operator + (float x , Complex c)
{
    Complex b;
    b.real = c.real + x;
    b.imag = c.imag ;
    return b;
}
Complex Complex::operator-(Complex c)
{
    Complex b;
    b.real = real - c.real;
    b.imag = imag - c.imag;
    return b;
}
Complex Complex::operator-(float x)
{
    Complex b;
    b.real = real - x;
    b.imag = imag ;
    return b;
}

Complex operator - (float x , Complex c)
{
    Complex b;
    b.real = c.real - x;
    b.imag = c.imag ;
    return b;
}
Complex& Complex::operator+= ( Complex c)
{
        this->real += c.real;
        this->imag += c.imag;
        return *this;
}

int Complex::operator ==(Complex c)
{
   if((real == c.real) && (imag == c.imag))
   {
       return 1;//equal
   }
   else
    return 0; //not equal
}

//prefix
Complex Complex::operator++()
{
    real ++;
    return *this;
}

//postfix
Complex Complex::operator++( int)
{
    Complex temp = *this;
    real ++;
    return temp; //return old version
}


//casting to float
Complex::operator float() const
{
    return real; //return old version
}
