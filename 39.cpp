/*
39.	Write empty class declarations for the following class hierarchy.				   
	    Derived --> Base1
        Derived --> Base2
*/
#include<iostream>
using namespace std;
class Derived{

};
class Base1:public Derived{

};
class Base2:public Derived{

};
int main(){
    Derived D;
    Base1 B1;
    Base2 B2;
    
    return 0;
}