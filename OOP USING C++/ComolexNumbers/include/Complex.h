#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imag;
    static int counter;
    public:
        Complex()
        {
            counter++;
            real=0;
            imag=0;
            cout<<"this is the default constractor number "<< counter <<endl;
        }
        Complex(float r , float i)
        {
            counter++;
            real=r;
            imag=i;
            cout<<"this is the 2 args constractor number "<< counter <<endl;

        }
        Complex(float v)
        {
            counter++;
            real=imag=v;
            cout<<"this is the one args constractor number "<< counter <<endl;

        }
        ~Complex()
        {
            counter--;
            cout<<"one object destroied the remaining objects = "<<counter<<endl;
        }
        void setReal(float);
        void setImag(float);
        float getReal();
        float geImag();
        void print();
        Complex add(Complex c1 , Complex c2);
        Complex Sub(Complex c1 , Complex c2);
        void SetComplex(float r , float i);
        void SetComplex(float v);
        friend Complex addTo(float v , Complex c);
        Complex operator+ ( Complex c);
        Complex operator+ ( float x);
        friend Complex operator + (float x , Complex c);
        Complex operator- ( Complex c);
        Complex operator- ( float x);
        friend Complex operator - (float x , Complex c);

        Complex& operator+= ( Complex c);
        int operator ==(Complex c);
        Complex operator++(); //prefix
        Complex operator++(int ); //postfix
        operator float() const; // casting operator
};

#endif // COMPLEX_H
