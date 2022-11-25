/*
48.	Vehicles may be either stopped of running in a lane. If two vehicles are running in opposite direction in a single lane there is a chance of collision. Write a C++ program using exception handling to avoid collisions. You are free to make necessary assumptions.
*/

#include<iostream>
using namespace std;
class Vehicle{
    public:
        double width;
        Vehicle(double width){
            this->width = width;
        }
};
int main(){
    Vehicle A(20),B(24);
    double lane_width = 45;

    try{
        if(A.width + B.width >= lane_width){
            throw "Collision occured !!";
        }
        cout<<"Successfully passed A, B Vehicles !!"<<endl;
    }
    catch(const char *str){
        cout<<str<<endl;
    }

    return 0;
}