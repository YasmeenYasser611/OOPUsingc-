#include <iostream>
#include "Stack.h"

using namespace std;

template<class T>
int Stack<T>:: counter = 0;


int main() {

    Stack<int> s1(2);
    s1.push(5);
    s1.push(14);
    s1.push(20);
    cout << "======================" << endl;

    viewContent(s1);
    cout << "========================" << endl;
    cout << s1.pop() << endl;
    cout << "number of stacks = " << s1.getcounter() << endl;

    Stack<int> s2;
    s2.push(3);
    cout << "======================" << endl;
    viewContentbyValue(s2);
    cout << "========================" << endl;
    cout << s2.pop() << endl;
    s2.push(11);
    cout << "number of stacks = " << Stack<int>::getcounter() << endl;

    // Using copy constructor
    Stack<int> s3(s1);
    cout << "======================" << endl;
    viewContent(s3);
    cout << "========================" << endl;

    cout << "Operator Overloading Trial" << endl;
    s3 = s2 = s1;
    cout << "======================" << endl;
    viewContent(s1);
    cout << "========================" << endl;
    cout << "======================" << endl;
    viewContent(s2);
    cout << "========================" << endl;
    cout << "======================" << endl;
    viewContent(s3);
    cout << "========================" << endl;

    return 0;
}
