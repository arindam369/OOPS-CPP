/*
43.	Write class definitions for the following class hierarchy

            Shape2D --> Circle, Rectangle  
		    			
The Shape2D class represents two dimensional shapes that should have pure virtual functions area(), perimeter() etc. Implement these functions in Circle and Rectangle. Also write proper constructor(s) and other functions you think appropriate in the Circle and Rectangle class. Now create an array of 5 Shape2D pointers. Create 3 Circle and 2 Rectangles objects and place their addresses in that array. Use a loop to print area and perimeter of all shapes on this array.
*/

#include<iostream>
#define PI 3.14
using namespace std;

//          Shape2D --> Circle , Rectangle

class Shape2D{      // Abstract Class
    protected:
        double radius,length,breadth;
    public:
        virtual void area() = 0;
        virtual void perimeter() = 0;
};
class Circle:public Shape2D{
    public:
        Circle(double r){
            radius = r;
        }
        void area(){
            cout<<"Area of the circle : "<<PI*radius*radius<<" unit^2"<<endl;
        }
        void perimeter(){
            cout<<"Perimeter of the circle : "<<2*PI*radius<<" unit"<<endl;
        }
};
class Rectangle:public Shape2D{
    public:
        Rectangle(double l,double b){
            length = l;
            breadth = b;
        }
        void area(){
            cout<<"Area of the Rectangle : "<<length*breadth<<" unit^2"<<endl;
        }
        void perimeter(){
            cout<<"Perimeter of the circle : "<<2*(length+breadth)<<" unit"<<endl;
        }
};
int main(){

    Circle C1(5), C2(6), C3(7);
    Rectangle R1(3,4), R2(5,6);

    Shape2D *ptrShape[5];

    ptrShape[0] = &C1;
    ptrShape[1] = &C2;
    ptrShape[2] = &C3;

    ptrShape[3] = &R1;
    ptrShape[4] = &R2;

    cout<<"\n--------------------------------------\n\n";
    for (int i = 0; i < 5; i++)
    {
        ptrShape[i]->area();
        ptrShape[i]->perimeter();
        cout<<"\n--------------------------------------\n\n";
    }
    

    return 0;
}