/*
27.	Complete the class with all function definitions for a circular queue
class Queue {
            int *data;
            int front, rear;
public :
            Queue(int );	   //create queue with specified size
            void add(int);	  //add specified element to the queue
            int remove();    //delete element from the queue
		    void disp();	//displays all elements in the queue(front to rear order)
}
Now, create a queue with size 10 add 2, 3, 4 and 5 in that order and finally delete two elements. Display elements present in the stack.
*/

#include<iostream>
using namespace std;
class Queue{
    int *data;
    int front,rear;
    int capacity;
    int next_index;
    public:
        Queue(int capacity){
            next_index = 0;
            this->capacity = capacity;
            data = new int[capacity];
        }
        void add(int element){
            if(next_index>=capacity){
                cout<<"Queue full !"<<endl;
                return;
            }
            rear = element;
            data[next_index] = element;
            next_index++;
        }
        void remove(){
            if(next_index==0){
                cout<<"Queue is already empty !!"<<endl;
                return;
            }
            next_index--;
        }
        void disp(){
            cout<<"Queue elements (in Front to Rear order) : ";
            for (int i = 0; i < next_index; i++)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;            
        }
};
int main(){
    Queue Q(10);
    Q.add(2);
    Q.add(3);
    Q.add(4);
    Q.add(5);
    Q.add(6);
    Q.add(7);
    Q.add(8);
    Q.add(9);
    Q.add(10);
    Q.add(11);

    Q.remove();
    Q.remove();

    Q.disp();

    return 0;
}