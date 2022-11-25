/*
15.	Consider the following two scenarios:
a)	We want to find out the maximum between three integers.
b)	We also want to find out the maximum element of an array of integers.
        Write two overloaded functions for these two scenarios.
*/

#include<iostream>
using namespace std;
int maximum(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;
    }
}
int maximum(int arr[],int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int a,b,c,n;
    cout<<"Enter three integers : ";
    cin>>a>>b>>c;
    cout<<"Max of three integers : "<<maximum(a,b,c)<<endl;
    
    cout<<"Enter the no. of elements in the array : ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Max element present in the array : "<<maximum(arr,n)<<endl;
    delete[] arr;

    return 0;
}