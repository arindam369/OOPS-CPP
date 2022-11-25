/*
9.	Now write another function swap() that takes two strings (character array) and interchanges them without reference parameters. Test this function using some arguments. Rewrite the function using reference parameters. Again test this function with some arguments.
*/

#include<iostream>
#include<cstring>
using namespace std;

void swap(string a,string b){
    string temp = a;
    a = b;
    b = temp;
}
void swap_ref(string *a,string *b){
    string temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    string a = "Naruto";
    string b = "Uzumaki";
    cout<<"Before swapping, a[] = "<<a<<", b[] = "<<b<<endl;

    swap(a,b);
    cout<<"After swapping (without reference), a[] = "<<a<<", b[] = "<<b<<endl;

    swap_ref(&a,&b);
    cout<<"After swapping (using reference), a[] = "<<a<<", b[] = "<<b<<endl;

    return 0;
}