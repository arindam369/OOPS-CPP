/*
44.	Implement the Shape hierarchy as shown in the figure. Each TwoDShape should contain function getArea to calculate the area of two-dimensional shape. Each ThreeDShape should have member functions getArea and getVolume to calculate the surface area and volume of the three-dimensional shape respectively. Create a program that uses Vector of Shape pointers to objects of each concrete class in the hierarchy. Now write a program that processes all the shapes in the Vector such that if the shape is a TwoDShape it prints name of shape and its area while it prints name of shape, its area and volume if the shape is a ThreeDShape.

        Shape --> TwoDShape --> Circle, Triangle, Ellipse
        Shape --> ThreeDShape --> Sphere, Cube

*/

#include<iostream>
#include<vector>
#define PI 3.14
using namespace std;

class Shape{
    protected:
        double length,breadth,height,radius,base,altitude,semiMajorAxis,semiMinorAxis,side;
    public:
        virtual void getFullDetails() = 0;
};
class TwoDShape: public Shape{
    public:
        virtual void getArea() = 0;
};
class ThreeDShape: public Shape{
    public:
        virtual void getArea() = 0;
        virtual void getVolume() = 0;
};
class Circle:public TwoDShape{
    public:
        Circle(double r){
            radius = r;
        }
        void getArea(){
            cout<<"Area of the Circle : "<<PI*radius*radius<<" unit^2"<<endl;
        }
        void getFullDetails(){
            cout<<"Name : Circle"<<endl;
            getArea();
        }
};
class Triangle:public TwoDShape{
    public:
        Triangle(double b,double h){
            base = b;
            altitude = h;
        }
        void getArea(){
            cout<<"Area of the Triangle : "<<0.5*base*altitude<<" unit^2"<<endl;
        }
        void getFullDetails(){
            cout<<"Name : Triangle"<<endl;
            getArea();
        }
};
class Ellipse:public TwoDShape{
    public:
        Ellipse(double a,double b){
            semiMajorAxis = a;
            semiMinorAxis = b;
        }
        void getArea(){
            cout<<"Area of the Ellipse : "<<PI*semiMajorAxis*semiMinorAxis<<" unit^2"<<endl;
        }
        void getFullDetails(){
            cout<<"Name : Ellipse"<<endl;
            getArea();
        }
};

class Sphere: public ThreeDShape{
    public:
        Sphere(double r){
            radius = r;
        }
        void getArea(){
            cout<<"Area of the Sphere : "<<4*PI*radius*radius<<" unit^2"<<endl;
        }
        void getVolume(){
            cout<<"Volume of the Sphere : "<<float(4/3)*PI*radius*radius*radius<<" unit^3"<<endl;
        }
        void getFullDetails(){
            cout<<"Name : Sphere"<<endl;
            getArea();
            getVolume();
        }
};
class Cube: public ThreeDShape{
    public:
        Cube(double a){
            side = a;
        }
        void getArea(){
            cout<<"Area of the Cube : "<<side*side<<" unit^2"<<endl;
        }
        void getVolume(){
            cout<<"Volume of the Cube : "<<side*side*side<<" unit^3"<<endl;
        }
        void getFullDetails(){
            cout<<"Name : Cube"<<endl;
            getArea();
            getVolume();
        }
};
int main(){
    Circle C(5);
    Triangle T(3,4);
    Ellipse E(5,6);
    Sphere S(5);
    Cube B(6);
    
    vector<Shape*> ptrShape;
    ptrShape.push_back(&C);
    ptrShape.push_back(&T);
    ptrShape.push_back(&E);
    ptrShape.push_back(&S);
    ptrShape.push_back(&B);
    
    cout<<"\n-------------------------------\n\n";
    for (int i = 0; i < ptrShape.size(); i++)
    {
        ptrShape[i]->getFullDetails();
        cout<<"\n-------------------------------\n\n";
    }
    

    return 0;
}