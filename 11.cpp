/*
    Constants and references
11.	Write a function that takes an integer and returns the factorial of that number. Declare function parameter as read only reference. Call the function with some argument from main function, store the result and print it. 
*/

#include<iostream>
using namespace std;
int factorial(const int &n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the integer whose factorial you want to find : ";
    cin>>n;
    int fact = factorial(n);
    cout<<"Factorial of "<<n<<" is : "<<factorial(n)<<endl;


    return 0;
}