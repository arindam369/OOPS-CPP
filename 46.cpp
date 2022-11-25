/*
        Exception Handling
46.	Two integers are taken from keyboard. Then perform division operation. Write a try block to throw an exception when division by zero occurs and appropriate catch block to handle the exception thrown.
*/

#include<iostream>
using namespace std;

int main(){
    int num,denom;
    cout<<"Enter two integers : ";
    cin>>num>>denom;
    try{
        if(denom==0){
            throw denom;
        }
        double result = num/denom;
        cout<<"\t"<<num<<"/"<<denom<<" = "<<result<<endl;
    }catch(int error){
        cout<<"\tException : Division by 0 not allowed !"<<endl;
    }

    return 0;
}