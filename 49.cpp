/*
                Templates
49.	Write a template function max() that is capable of finding maximum of two things (that can be compared). Use this function to find (i) maximum of two integers, (ii) maximum of two complex numbers (previous code may be reused). Now write a specialized template function for strings (i.e. char *). Also find the maximum of two strings using this template function.
*/

#include<iostream>
#include<cmath>
using namespace std;

template<typename T> 
void maxVal(T a,T b){
    if(a>b){
        cout<<a;
    }
    else{
        cout<<b;
    }
}

template<typename T>
class Complex{
    public:
        T real,img;
        Complex(){}
        Complex(T x,T y){
            real = x;
            img = y;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

template<typename T>
void maxVal(Complex<T> a,Complex<T> b){
    T modVal1 = sqrt(a.real*a.real + a.img*a.img);
    T modVal2 = sqrt(b.real*b.real + b.img*b.img);
    if(modVal1>modVal2){
        a.display();
    }
    else{
        b.display();
    }
}

int main(){
    maxVal<int>(3,4);   cout<<endl;
    maxVal<string>("Arindam","Naruto"); cout<<endl;
    maxVal<float>(3.5,4.7); cout<<endl;
    
    Complex<double> C1(4,5),C2(6,7);
    maxVal<double> (C1,C2);
    
    return 0;
}