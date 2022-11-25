/*
       : Constants and pointers :
12.	Write a function Strcpy to copy one string to another with suitable formal parameters declarations. Following points must be considered.
a)	Source string must not get modified
b)	Target string is allowed to get modified
c)	The Pointers must be constant pointers.
Use it to copy some strings.
*/

#include<iostream>
using namespace std;

void Strcpy(const char **str1,const char **str2){
    *str1 = *str2;
}

int main(){
    const char *s1 = "Nobita", *s2 = "Arindam";
    cout<<"S1 = "<<s1<<" ,S2 = "<<s2<<endl;
    Strcpy(&s1,&s2);
    cout<<"After copying (using Strcpy function) : S1 = "<<s1<<" ,S2 = "<<s2<<endl;

    return 0;
}