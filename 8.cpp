/*          : Reference :
8.	Write a function swap() that takes two integer arguments and interchanges the values of those arguments using reference. Now in the main function, instantiate two integer variables with some values. Print their values. Call the swap function with these variables. Finally print the values of those variables. Check the result.
*/

#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10, b = 20;
    cout<<"Before swapping, a = "<<a<<", b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping, a = "<<a<<", b = "<<b<<endl;

    return 0;
}