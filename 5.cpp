/*
5.	Write a program to display Celsius to Fahrenheit conversion table using a for loop. Consider only  0˚ to 100˚ Celsius.  Declare variables when they are used for the first time.
*/

#include<iostream>
using namespace std;

double cel_to_faren(int cel){
//                                      c/5 = (f-32)/9     =>  f = 9*(c/5) + 32
    double faren = 9*(cel/5.0) + 32;
    return faren;
}

int main(){
    cout<<"  Celsius \t Farenheit"<<endl;
    cout<<"-------------------------------"<<endl;
    
    for (int i = 0; i <= 100; i++)
    {
        cout<<i<<" Celsius  =  "<<cel_to_faren(i)<<" Fahrenheit"<<endl;
    }

    return 0;
}