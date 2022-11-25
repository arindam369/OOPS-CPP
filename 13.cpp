/*
Inline function
13.	Write an inline function add() that takes three integer arguments and returns the sum of these arguments.
*/

#include<iostream>
using namespace std;
inline int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter three integers : ";
    cin>>a>>b>>c;
    cout<<"Sum : "<<add(a,b,c)<<endl;
    return 0;
}
