/*
21.	 Write a class Vector for one dimensional array. Write suitable constructor/copy constructor. Also add member functions for perform basic operations (such as addition, subtraction, equality, less, greater etc.). Create vectors and check if those operations are working correctly.
*/

#include<iostream>
#include<cmath>
using namespace std;

class Vector{
    public:
        double a,b;
        Vector(){}
        Vector(double a,double b){
            this->a = a;
            this->b = b;
        }
        Vector add(Vector V){
            this->a += V.a;
            this->b += V.b;
            return *this;
        }
        Vector subtract(Vector V){
            this->a -= V.a;
            this->b -= V.b;
            return *this;
        }
        Vector multiply(Vector V){  // (a+ib)(c+id) = (ac-bd) + i(ad+bc)
            this->a = this->a*V.a - this->b*V.b;
            this->b = this->a*V.b + this->b*V.a;
            return *this;
        }
        // double division(){
        //     return a/b;
        // }
        bool equality(Vector V){
            return (this->a==V.a && this->b==V.b);
        }
        bool greater(Vector V){
            double mod1 = pow(this->a,2)+pow(this->b,2);
            double mod2 = pow(V.a,2)+pow(V.b,2);
            return mod1>mod2;
        }
        bool lesser( Vector V){
            double mod1 = pow(this->a,2)+pow(this->b,2);
            double mod2 = pow(V.a,2)+pow(V.b,2);
            return mod1<mod2;
        }
        void display(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    Vector V1(10,20),V2(10,20);
    cout<<"V1 == V2 ? --> "<<V1.equality(V2)<<endl;
    V1.add(V2);
    V1.display();
    return 0;
}