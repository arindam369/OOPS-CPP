/*       : Default values for function parameters :
17.	Consider function add() in 13. Specify the default values for second and third parameters to 0 (zero). Now call this function with three, two and one arguments and see the result.
*/

#include<iostream>
using namespace std;
inline int add(int a,int b=0,int c=0){
    return a+b+c;
}
int main(){
    cout<<"Passing 3 integers : ";
    cout<<"Sum = "<<add(10,20,30)<<endl;

    cout<<"Passing 2 integers : ";
    cout<<"Sum = "<<add(10,20)<<endl;

    cout<<"Passing 1 integers : ";
    cout<<"Sum = "<<add(10)<<endl;
    return 0;
}