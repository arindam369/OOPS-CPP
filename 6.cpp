/*
6.	Write a program that defines a constant PI and takes radius of a circle from keyboard and prints area of that circle.
*/

#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    double r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"Area of the circle : "<<PI*r*r<<endl;

    return 0;
}