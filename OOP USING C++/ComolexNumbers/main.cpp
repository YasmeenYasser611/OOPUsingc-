#include <iostream>
#include"Complex.h"
using namespace std;


int main()
{

    //Complex myComp1 , myComp2 , resultComp;
    float r1,r2,i1,i2 , r3 , i3;
    cout<<"Please enter the real part of the first complex number: ";
    cin>>r1;
    //myComp1.setReal(r1);
    cout<<"Please enter the imaginary part of the first complex number: ";
    cin>>i1;
    //myComp1.setImag(i1);
    //myComp1.SetComplex(r1,i1);
    cout<<"Please enter the real part of the second complex number: ";
    cin>>r2;
    //myComp2.setReal(r2);
    cout<<"Please enter the imaginary part of the second complex number: ";
    cin>>i2;
    cout<<"Please enter the real part of the thired complex number: ";
    cin>>r3;
    cout<<"Please enter the imaginary part of the thired complex number: ";
    cin>>i3;
   // myComp2.setImag(i2);
   //myComp2.SetComplex(r2,i2);
    Complex myComp1(r1, i1);
    Complex myComp2(r2, i2);
    Complex myComp3(r3,i3);
    Complex resultComp;
    myComp1.print();
    myComp2.print();
    resultComp = resultComp.add(myComp1 , myComp2);
    resultComp.print();
    resultComp = resultComp.Sub(myComp1 , myComp2);
    resultComp.print();
    Complex a(2,5);
    a= addTo(4 , a);
    a.print();
    cout<<"Finish"<<endl;
    cout<<"operator + overloading:"<<endl;
    resultComp = myComp1 + myComp2 + myComp3 ;
    resultComp.print();
    resultComp = myComp1 + 5;
    resultComp.print();
    resultComp = 5 + myComp1;
    resultComp.print();
    cout<<"operator - overloading:"<<endl;
    resultComp = myComp1 - myComp2 - myComp3 ;
    resultComp.print();
    resultComp = myComp1 - 5;
    resultComp.print();
    resultComp = 5 - myComp1;
    resultComp.print();
    cout<<"operator casting to float overloading:"<<endl;
    cout<<(float)resultComp<<endl;
    cout<<"operator ++ prefix overloading:"<<endl;
    ++resultComp;
    resultComp.print();
    cout<<"operator ++ prostfix overloading:"<<endl;
    resultComp++;
    resultComp.print();
    cout<<"operator += overloading:"<<endl;
    resultComp+= myComp3;
    resultComp.print();
    cout<<"operator == overloading:"<<endl;
    Complex Test(-1,3);
   if((resultComp==Test)==1)
   {
       cout<<"equal"<<endl;
   }
   else{
    cout<<"not equal"<<endl;
   }
   resultComp.print();

   //static allocation
  Complex arr[3]={Complex(2), Complex(), Complex(5,7)};
  for(int i=0 ; i<3 ; i++)
  {
      arr[i].print();
  }
  //Dynamic allocation
  Complex * cptr1;
  Complex *cptr2;
  cptr1 = new Complex(2.1,7.3); //pointer pointes to one object in the memory
  (*cptr1).print();
  cptr2 = new Complex[12]; //pointer pointes to array
  cptr2[1].print();
    return 0;
}
