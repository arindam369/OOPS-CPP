/*
33.	    A program is given as follows:

class INT { 
        int i; 
    public : 
        INT(int a):i(a){}
        ~INT() {} 
};
int main() { 
    int x = 3;
    INT y = x; 
    y++ = ++y;
    x = y;
    return 0;
}

    Write extra functions/operators required in the INT class to make main program work. Provide suitable implementation for the added functions/operators.
*/

#include<iostream>
using namespace std;
class INT { 
        // int i; 
    public : 
    int i;
        INT(int a):i(a){}
        ~INT() {} 
        INT &operator++(){       //pre increment (++i)
            i+=1;
            return *this;
        }
        INT operator++(int){   //post increment (i++)
            INT newI(i);
            i+=1;
            return newI;
        }
        operator int(){ // converting to int
            return i;
        }
};

int main() { 
    int x = 3;
    INT y = x; 
    y++ = ++y;
    x = y;
    return 0;
}