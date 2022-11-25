/*
   : Operator Overloading :

30.	Write a class “Point” which stores coordinates in (x, y) form. Define necessary constructor, destructor and other reader/writer functions. Now overload ‘-’ operator to calculate the distance between two points.

*/
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    double x,y;
    public:
        Point(){}
        Point(double x,double y){
            this->x = x;
            this->y = y;
        }
        Point operator-(Point P){
            Point newP;
            newP.x = this->x - P.x;
            newP.y = this->y - P.y;
            return newP;
        }
        double calculateDistance(){
            double distance = sqrt( pow(x,2) + pow(y,2) ); 
            return distance;
        }
        void display(){
            cout<<"("<<x<<","<<y<<")";
        }
};

int main(){
    Point P1(0,0),P2(3,4);
    Point P3 = P1-P2;
    cout<<"\n\tDistance between "; P1.display();   cout<<" and ";  P2.display(); cout<<" is : "<<P3.calculateDistance()<<" unit\n\n";


    return 0;
}