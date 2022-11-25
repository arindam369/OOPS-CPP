/*
25.	Write the definition for a class called Complex that has private floating point data members for storing real and imaginary parts. The class has the following public member functions:

    setReal() and setImg() to set the real and imaginary part respectively.
    getReal() and getImg() to get the real and imaginary part respectively.
    disp() to display complex number object
    sum() to sum two complex numbers & return a complex number

Write main function to create three complex number objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all complex numbers. 
*/

#include<iostream>
using namespace std;

class Complex{
    float real,imaginary;
    public:
        void setReal(float real){
            this->real = real;
        }
        void setImg(float imaginary){
            this->imaginary = imaginary;
        }
        
        float getReal(){
            return this->real;
        }
        float getImg(float imaginary){
            return this->imaginary;
        }

        void display(){
            if(imaginary>=0){
                cout<<real<<" +"<<imaginary<<"i"<<endl;
            }
            else{
                cout<<real<<" "<<imaginary<<"i"<<endl;
            }
        }
        Complex sum(Complex C){
            Complex sumC;
            sumC.real = this->real+C.real;
            sumC.imaginary = this->imaginary + C.imaginary;
            return sumC;
        }

};

int main(){
    Complex C1,C2,C3;
    C1.setReal(10);     C1.setImg(20);

    C2.setReal(30);     C2.setImg(40);

    C3 = C1.sum(C2);
    
    C1.display();
    C2.display();
    C3.display();

    return 0;
}