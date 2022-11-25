/*     : Flexible Variable Declaration :

4.	Write a program to print 1 to 10 using a for loop. Declare the loop variable inside the for loop. Check the scope of this variable.
*/

#include<iostream>
using namespace std;

int main(){
    for ( ; ; )
    {
        static int i=1;
        if(i>10){
            break;
        }
        cout<<i<<endl;
        i++;
    }
    // cout<<i<<endl;  // error

    return 0;
}

// Scope of the "i" variable is inside the "for loop"
// So if we use i outside the for loop, the code does not run as i is local variable for the "for loop" and not a global variable 