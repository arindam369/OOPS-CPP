/*
    : Inheritance :
38.	Write empty class declarations for the following class hierarchy.		   

	    Derived --> Base					
*/
#include<iostream>
using namespace std;
class Derived{

};
class Base:public Derived{

};
int main(){
    Derived D;
    Base B;

    return 0;
}