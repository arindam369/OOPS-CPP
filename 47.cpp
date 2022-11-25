// 47.	Design a class Stack with necessary exception handling.
#include<iostream>
using namespace std;
class Stack{
    public:
        int *arr;
        int next_index;
        int capacity;
        Stack(int capacity){
            this->capacity = capacity;
            arr = new int[capacity];
            next_index = 0;
        }
        void push(int data){
            try{
                if(next_index == capacity){
                    throw "Stack Full !!";
                }
                arr[next_index] = data;
                next_index++;
            }
            catch(const char *errorMessage){
                cout<<errorMessage<<endl;
            }
        }
        bool isEmpty(){
            return next_index == 0;
        }
        int pop(){
            try{
                if(next_index==0){
                    throw "Stack Empty !!";
                }
                next_index--;
                return arr[next_index];
            }
            catch(const char *error){
                cout<<error<<endl;
            }
        }
        void display(){
            try{
                if(next_index == 0){
                    throw "Stack Empty !!";
                }
                for (int i = 0; i < next_index; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            catch(const char *error){
                cout<<error<<endl;
            }
        }
};
int main(){
    Stack S(5);
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.push(60);

    S.display();
    cout<<"Pop : "<<S.pop()<<endl;
    S.display();


    return 0;
}