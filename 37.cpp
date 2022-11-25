/*
37.	Design and implement class(es) to support the following code segment.
Index in(4), out(10);
int x = in;			
int y = in + out;		
in = 2;				
Integer i;
i = in;				
*/

#include<iostream>
using namespace std;
class Index{
    public:
        int position;
        Index(int pos){
            position = pos;
        }
        operator int(){
            return position;
        }
};
class Integer{
    public:
        int a;
        Integer operator=(Index pos){
            this->a = pos.position;
            return *this;
        }
};
int main(){
    Index in(4), out(10);
    int x = in;			
    int y = in + out;		
    in = 2;				
    Integer i;
    i = in;

    return 0;
}