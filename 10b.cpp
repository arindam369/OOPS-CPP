// swap using pointer

#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

auto start = high_resolution_clock::now();

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10, b = 20;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    for (int i = 0; i < 1000000001; i++)
    {
        swap(&a,&b);
    }
    
    // swap(&a,&b);
    cout<<"After swapping(using pointer), a = "<<a<<", b = "<<b<<endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    return 0;
}