/*
20.	Write a class that represents a class of wireless device. A device has a location (point object may be used), a fixed unique id, and a fixed circular transmission range. Write suitable constructors and member functions for this class. Instantiates 10 such devices. Choose location (coordinates) and transmission range of the devices randomly. Now, for each of these devices, find the neighbor devices (i.e. devices that belong to the transmission range). Suppose, all of these devices have moved to a new location (randomly chosen). Find out the new set of neighbors for each of these devices.
*/

#include<iostream>
#include<cmath>
using namespace std;

class Point{
    public:
        double x,y;
        Point(){
            this->x = 0;
            this->y = 0;
        }
        void set_coordinate(double x,double y){
            this->x = x;
            this->y = y;
        }
};

class wirelessDevice{
    public:
        Point P;
        int unique_id;
        double range;
        wirelessDevice(){
            this->P = P;
            this->range = range;
            this->unique_id = unique_id;
        }
        void set_details(Point P,double range,int unique_id){
            this->P = P;
            this->range = range;
            this->unique_id = unique_id;
        }
        double distance(wirelessDevice D){
            wirelessDevice newD;
            newD.P.x = P.x - D.P.x;
            newD.P.y = P.y - D.P.y;
            double distance = sqrt( pow(newD.P.x,2) + pow(newD.P.y,2) );
            return distance;
        }
        void changeLocation(Point P){
            this->P.x = P.x;
            this->P.y = P.y;
        }
};
void findNeighbours(wirelessDevice W[]){
    int distance[3][3];
    
    cout<<"\n  ------------------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            distance[i][j] = W[i].distance(W[j]);
            if(distance[i][j] <= W[i].range && distance[i][j]!=0){
                cout<<"\tNeighbour of "<< W[i].unique_id<<" is "<<W[j].unique_id<<endl;
            }
        }
    }
    cout<<"  ------------------------------------\n\n";
}
int main(){
    Point P[3];
    wirelessDevice W[3];
    int point_x,point_y,range_rad,id;
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the location(x,y), range, id of "<<i+1<<"th device : "; 
        cin>>point_x>>point_y>>range_rad>>id;
        Point P_temp;   P_temp.set_coordinate(point_x,point_y);
        W[i].set_details(P_temp,range_rad,id);
    }

    findNeighbours(W);


    // changing location
    cout<<"Changing Locations of devices : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the new location(x,y) of "<<i+1<<"th device : "; 
        cin>>point_x>>point_y;
        Point P_temp;   P_temp.set_coordinate(point_x,point_y);
        W[i].changeLocation(P_temp);
    }

    findNeighbours(W);

    return 0;
}