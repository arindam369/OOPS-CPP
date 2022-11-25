/*
3.	Create a factorial table using cout as follows:
    1! = 1
    2! = 2
    3! = 6
    . . . .
    6! = 720
*/

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the no. whose factorial table you want to find : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"! = "<<factorial(i+1)<<endl;
    }

    return 0;
}