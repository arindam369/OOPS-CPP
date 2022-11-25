/*      : Classes and Objects :
18.	Write a simple class that represents a class of geometrical points each of which has three coordinates. The class should have appropriate constructor(s). Also add a member function distance() that calculates Euclidian distance between two points. Now create two points, find the distance between them and print it.
*/

#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int x,y,z;
    public:
        Point(){
            x=0;
            y=0;
            z=0;
        }
        Point(int x,int y,int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        double distance(Point P){
            Point Q;
            Q.x = pow( (this->x - P.x),2 );
            Q.y = pow( (this->y - P.y),2 );
            Q.z = pow( (this->z - P.z),2 );
            double distance = sqrt(Q.x + Q.y + Q.z);
            return distance;
        }
};
int main(){
    
    Point p1(1,2,3),p2(4,5,6);
    cout<<"Required Distance : "<<p1.distance(p2)<<endl;

    return 0;
}