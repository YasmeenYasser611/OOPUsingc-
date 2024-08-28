#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <iostream>
using namespace std;

template<class T>
class Stack {
private:
    int tos;         // top of stack
    int stacksize;   // maximum size of the stack
    T *st;           // pointer to stack array
    static int counter; // to count the number of stack instances

public:



    // Default and parameterized constructor
    Stack(int n = 10) {
        tos =0;
        stacksize =n ;
        st = new T[stacksize];
        counter++;
        cout << "Stack constructor, instance number: " << counter << endl;
    }

    // Copy constructor
    Stack(const Stack &z)
     {
        tos = z.tos;
        stacksize = z.stacksize;
        st = new T[stacksize];
        for (int i = 0; i < tos; i++)
            st[i] = z.st[i];
        counter++;
        cout << "Copy constructor, instance number: " << counter << endl;
    }

    // Destructor
    ~Stack() {
        delete[] st;
        counter--;
        cout << "Stack destructor, remaining instances: " << counter << endl;
    }

    // Push function
    void push(T n) {
        if (tos == stacksize) {
            cout << "Stack is full" << endl;
        } else {
            st[tos] = n;
            tos++;
        }
    }

    // Pop function
    T pop() {
        if (tos == 0) {
            cout << "Stack is empty" << endl;
            return T(); // Return a default-initialized value of type T
        } else {
            tos--;
            return st[tos];
        }
    }

    // Static function to get the number of instances
    static int getcounter() {
        return counter;
    }

    // Friend functions to view the stack content
    template<class U>
   friend void viewContent(Stack<U> &x)
    {
        int t = x.tos;
        while (t != 0) {
        cout << x.st[--t] << endl;
    }
}
    template<class U>
    friend void viewContentbyValue(Stack<U> x)
     {
      int t = x.tos;
       while (t != 0) {
       cout << x.st[--t] << endl;
    }
}


    // Assignment operator overload
    Stack<T>& operator=(const Stack &s) {
        if (this != &s) { // Check for self-assignment
            delete[] st;   // Free the existing resource
            stacksize = s.stacksize;
            tos = s.tos;
            st = new T[stacksize]; // Allocate new memory
            for (int i = 0; i < tos; i++)
                st[i] = s.st[i];   // Copy elements
        }
        cout << "Assignment operator called" << endl;
        return *this;
    }


};

#endif // STACK_H
