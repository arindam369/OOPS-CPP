/*
40.	Write empty class declarations for the following class hierarchy.
        F --> D & E 
              D --> A & B
              E --> B & C

*/

#include<iostream>
using namespace std;
class F{

};
class D: public F{

};
class E: public F{

};
class A:public D{

};
class B:public D,public E{

};
class C:public E{

};

int main(){
    F f;
    D d;
    E e;
    A a;
    B b;
    C c;

    return 0;
}