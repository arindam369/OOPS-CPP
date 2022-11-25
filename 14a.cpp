/*
14.	Check if the above inline add function takes more or less time than a non-inline version of add function.
*/

#include <iostream>
#include<cstring>
#include<chrono>
using namespace std;
using namespace std::chrono;
auto start = high_resolution_clock::now();

inline int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter three integers : ";
    cin>>a>>b>>c;
    cout<<"Sum : "<<add(a,b,c)<<endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;


    return 0;
}
