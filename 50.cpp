// 50.	Write a template function swap() that is capable of interchanging the values of two variables. Used this function to swap (i) two integers, (ii) two complex numbers (previous code may be reused). Now write a specialized template function for the class Stack (previous code may be reused). Also swap two stacks using this template function.

#include<iostream>
#include<stack>
using namespace std;

template<typename T>
class Complex{
    public:
        T real,img;
        Complex(){}
        Complex(T real,T img){
            this->real = real;
            this->img = img;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

template<typename T>
void swap_val(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
void swap_val(Complex<T> &C1,Complex<T> &C2){
    Complex<T> temp;
    temp.real = C1.real;  temp.img = C1.img;
    C1.real = C2.real;   C1.img = C2.img;
    C2.real = temp.real;   C2.img = temp.img;
}

template<typename T>
void swap_val(stack<T> &S1,stack<T> &S2){
    stack<T> temp1,temp2;
    while(S1.size()!=0)
    {
        temp1.push(S1.top());
        S1.pop();
    }

    while(S2.size()!=0){
        temp2.push(S2.top());
        S2.pop();
    }
    cout<<"After Swapping, S1 : ";
    while(temp2.size()!= 0){
        S1.push(temp2.top());
        cout<<S1.top()<<" ";
        temp2.pop();
    }
    cout<<endl;
    cout<<"After Swapping, S2 : ";
    while(temp1.size()!= 0){
        S2.push(temp1.top());
        cout<<S2.top()<<" ";
        temp1.pop();
    }
    cout<<endl<<endl;
}

int main(){
    int a=10,b=20;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    swap_val<int>(a,b);
    cout<<"After swapping, a = "<<a<<", b = "<<b<<endl<<endl;

    Complex<int> C1(4,5),C2(6,7);
    C1.display();   C2.display();
    swap_val(C1,C2);
    cout<<"After Swapping : "<<endl;
    C1.display();   C2.display();

    stack<int> S1,S2;
    cout<<"\nBefore Swapping, S1 : ";
    for (int i = 99; i <= 108; i++)
    {
        S1.push(i);
        cout<<S1.top()<<" ";
    }
    cout<<endl;
    cout<<"Before Swapping, S2 : ";
    for (int i = 10; i >0; i--)
    {
        S2.push(i);
        cout<<S2.top()<<" ";
    }
    cout<<endl<<endl;
    
    swap_val(S1,S2);
    
    
}