// 31.	Design a class Complex that includes all the necessary functions and operators like =, +, -, *, /  .

#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    double x,y;
    public:
        Complex(){}
        Complex(double x,double y){
            this->x = x;
            this->y = y;
        }
        Complex operator+(Complex C){
            Complex newC;
            newC.x = this->x + C.x;
            newC.y = this->y + C.y;
            return newC;
        }
        Complex operator-(Complex C){
            Complex newC;
            newC.x = this->x - C.x;
            newC.y = this->y - C.y;
            return newC;
        }
        Complex operator*(Complex C){   // (a+ib)(c+id) = (ac-bd) + i(ad+bc)
            Complex newC;
            newC.x = (x * C.x) - (y * C.y);
            newC.y = (x * C.y) + (y * C.x);
            return newC;
        }
        Complex operator/(Complex C){   // (a+ib)/(c+id) = (a+ib)(c-id) / (c^2 + d^2)
            Complex newC;              // = {(ac+bd)+i(bc-ad)}/(c^2+d^2)
            newC.x = (x*C.x + y*C.y)/( pow(C.x,2) + pow(C.y,2) );
            newC.y = (y*C.x - x*C.y)/( pow(C.x,2) + pow(C.y,2) );
            return newC;
        }
        bool operator=(Complex C){
            return x==C.x && y==C.y;
        }
        void display(){
            cout<<x<<" + "<<y<<"i"<<endl;
        }
};
int main(){
    Complex C1(2,3),C2(4,5);
    cout<<"C1 : ";  C1.display();
    cout<<"C2 : ";  C2.display();
    
    Complex sum = C1+C2;    cout<<"\nC1 + C2 = "; sum.display();
    Complex sub = C1-C2;    cout<<"C1 - C2 = "; sub.display();
    Complex mult = C1*C2;   cout<<"C1 * C2 = "; mult.display();
    Complex div = C1/C2;    cout<<"C1 / C2 = "; div.display();
    bool isEqual=C1=C2;
    cout<<"C1 == C2  ? "<<isEqual<<endl;

    return 0;
}