/*
26.	Complete the class with all function definitions for a stack
class Stack {
            int *buffer, top;
public :
            Stack(int);		      //create a stack with specified size
            void push(int);	     //push the specified item 
 	        int pop();			//return the top element
		    void disp();	   //displays elements in the stack in top to bottom order
}
Now, create a stack with size 10, push 2, 3, 4 and 5 in that order and finally pop one element. Display elements present in the stack.
*/

#include<iostream>
using namespace std;
class Stack{
    int *buffer,top;
    int capacity;
    int next_index;
    public:
        Stack(int capacity){
            this->capacity = capacity;
            buffer = new int[capacity];
            next_index=0;
        }
        void push(int data){
            if(next_index >= capacity){
                cout<<"Stack is full !"<<endl;
                return;
            }
            top = data;
            buffer[next_index] = data;
            next_index++;
        }
        int pop(){
            if(next_index == 0){
                cout<<"Stack is Empty !!"<<endl;
                return -1;
            }
            next_index --;
            top = buffer[next_index];
            return top;
        }
        void disp(){
            cout<<"Stack elements (in Top to Bottom order) : ";
            for (int i = next_index-1; i >=0; i--)
            {
                cout<<buffer[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    Stack S(10);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);
    S.push(8);
    S.push(9);
    S.push(10);
    S.push(11);

    cout<<"Pop : "<<S.pop()<<endl;

    S.disp();

    return 0;
}