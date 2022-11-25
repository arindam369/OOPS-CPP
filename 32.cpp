/*
32.	Implement a class “Quadratic” that represents second-degree polynomial i.e. polynomial of type ax2+bx+c. The class will require three data members corresponding to a, b and c. Implement the following:
    a)	A constructor (including a default constructor which create a null polynomial)
    b)	Overload the addition operator to add two polynomials of degree 2.
    c)	Overload << and >> operators to print and read polynomials.
    d)	A function to compute the value of polynomial for a given x.
    e)	A function to compute roots of the equation ax2+bx+c=0. Remember, root may be a complex number. You may implement “Complex” class to represent root of the quadratic equation.
*/
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
        void display(){
            if(y>=0){
                cout<<x<<" + "<<y<<"i"<<endl;
            }
            else{
                y*=-1;
                cout<<x<<" - "<<y<<"i"<<endl;
            }
        }
        friend class Quadratic;
};
class Quadratic{
    double a,b,c;
    public:
        Quadratic(){
            a=0;
            b=0;
            c=0;
        }
        Quadratic(double a,double b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        Quadratic operator+(Quadratic eq){
            Quadratic newEq;
            newEq.a = a + eq.a;
            newEq.b = b + eq.b;
            newEq.c = c + eq.c;
            return newEq;
        }
        double compute(double x){
            double sum = a*x*x + b*x + c;
            return sum;
        }
        void root1(){
            double root1_real,d = b*b - 4*a*c;
            Complex root1_com;
            if(d>=0){     // real root
                root1_real = ( -b + sqrt(d) )/2*a;
                cout<<"Root1 : "<<root1_real<<endl;
            }
            else{   // complex root
                d*=-1;
                root1_com.x = -b/(2*a);
                root1_com.y = sqrt(d)/(2*a);
                cout<<"Root1 : "; root1_com.display();
            }
        }
        void root2(){
            double root2_real,d = b*b - 4*a*c;
            Complex root2_com;
            if(d>=0){     // real root
                root2_real = ( -b - sqrt(d) )/2*a;
                cout<<"Root2 : "<<root2_real<<endl;
            }
            else{   // complex root
                d*=-1;
                root2_com.x = -b/(2*a);
                root2_com.y = -sqrt(d)/(2*a);
                cout<<"Root2 : "; root2_com.display();
            }
        }

        friend ostream &operator<<(ostream &out, const Quadratic &eq);
        friend istream &operator>>(istream &in, Quadratic &eq);
};
ostream &operator<<(ostream &out, const Quadratic &eq){
    out<<eq.a<<"x^2 + "<<eq.b<<"x + "<<eq.c<<endl;
    return out;
}
istream &operator>>(istream &in, Quadratic &eq){
    cout<<"Enter coeff of x^2,x,1 :   ";
    in>>eq.a>>eq.b>>eq.c;

    return in;
}
int main(){
    Quadratic Eq1,Eq2,Eq3;
    cout<<"\nPol 1 :   ";
    cin>>Eq1;       cout<<"\t\t"<<Eq1;

    cout<<"\nPol 2 :   ";
    cin>>Eq2;       cout<<"\t\t"<<Eq2;

    cout<<"\n\nSum :   ";
    Eq3 = Eq1+Eq2;  cout<<Eq3;

    cout<<"\nSum (at x=2) :   "<<Eq3.compute(2)<<endl;

    cout<<"\n----------------------------\n";
    cout<<"      Roots of sum  "<<endl;
    Eq3.root1();
    Eq3.root2();
    cout<<"----------------------------\n\n";

    return 0;
}