/*
7.	Write a function that takes an integer and returns the factorial of that number. Declare function parameter as const. Call the function with some argument from main function, store the result and print it.
*/

#include<iostream>
using namespace std;
int factorial(const int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter an integer : ";
    cin>>n;
    int fact = factorial(n);
    cout<<"Factorial of "<<n<<" : "<<fact<<endl;


    return 0;
}