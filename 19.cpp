/*
19.	Write a class for the geometrical shape rectangle. Write suitable constructors and member functions. Add a member function area() that calculates the area of a rectangle. Create 4 rectangles and print their respective area.
*/

#include<iostream>
using namespace std;
class Rectangle{
    double length,breadth;
    public:
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }
        double area(){
            return length*breadth;
        }
};
int main(){
    Rectangle R1(10,20),R2(30,40),R3(50,60),R4(70,80);
    cout<<"Area of R1 : "<<R1.area()<<endl;
    cout<<"Area of R2 : "<<R2.area()<<endl;
    cout<<"Area of R3 : "<<R3.area()<<endl;
    cout<<"Area of R4 : "<<R4.area()<<endl;

    return 0;
}