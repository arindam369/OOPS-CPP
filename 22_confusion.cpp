/*
22.	Write a class IntArray for one dimensional integer array. Implement the necessary constructor, copy constructor, and destructor (if necessary) in this class. Implement other member functions to perform operations, such adding two arrays, reversing an array, sorting an array etc. Create an IntArray object having elements 1, 2 and 3 in it. Print its elements. Now, create another IntArray object which is an exact copy of the previous object.  Print its elements. Now, reverse the elements of the last object. Finally print elements of both the objects.
*/

// wtf !!

#include<iostream>
using namespace std;
class IntArray{
    public:
        int *arr;
        int n;
        IntArray(){
            arr = new int[n];
        }
        IntArray(int n){
            this->n = n;
            arr = new int[n];
        }
        IntArray(IntArray &){

        }
        ~IntArray(){}
        void add(IntArray A){
            for (int i = 0; i < n; i++)
            {
                this->arr[i] += A.arr[i];
            }
        }
        void reverse(){
            for (int i = 0; i < n/2; i++)
            {
                arr[i] = arr[n-i];
            }
        }
        void sort(){
            for (int i = 0; i < n-1; i++)
            {
                for (int j = 0; j < n-1-i; j++)
                {
                    if(arr[j]>arr[j+1]){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
        }
};
int main(){
    IntArray a(5);
    return 0;
}


// #include<iostream>
// using namespace std;
// class IntArray{
//     public:
//         int *arr,n; 

//         IntArray add(IntArray newarray){
//             IntArray temp;
//             for (int i = 0; i < n; i++)
//             {
//                 temp.arr[i] += newarray.arr[i];
//                 temp.arr[i] += this->arr[i];
//             }
//             return temp;
//         }
// };

// int main(){
//     IntArray A,B;
//     cout<<"Enter the no. of elements of the array : ";
//     cin>>A.n;
//     B.n = A.n;
//     cout<<"Enter "<<A.n<<" elements of the array A : ";
//     for (int i = 0; i < A.n; i++)
//     {
//         cin>>A.arr[i];
//     }
//     cout<<"Enter "<<B.n<<" elements of the array B : ";
//     for (int i = 0; i < B.n; i++)
//     {
//         cin>>B.arr[i];
//     }
    
//     IntArray C = A.add(B);
//     for (int i = 0; i < A.n; i++)
//     {
//         cout<<C.arr[i]<<" "<<endl;
//     }
    

// }



#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
class IntArray{
    public:
        int *arr;
        IntArray ()
        {}
        IntArray( int *a)
        { for(int i=0;i<3;i++)
            this->arr[i]=a[i];
        }
        IntArray add (IntArray newarray){
            IntArray addedarray;
            for(int i=0;i<3;i++)
            addedarray.arr[i] = this->arr[i] + newarray.arr[i];
            return addedarray;
        }
        IntArray reverse ()
   
{ IntArray reversedarray;
            for(int i=0;i<3;i++)
            reversedarray.arr[3-1-i] = this->arr[i];
            return reversedarray;
        }
};
int main()
{   int arr1[3] = {1,2,3};
    int arr2[3] = {9,8,7};
    int arr3[3] ={0,0,0};
    IntArray A1(arr1);
    IntArray A2(arr2);
    IntArray A3(arr3);
    A3 = A1.add(A2);
    for (int i=0;i<3;i++)
    { cout<<arr3[i]<<" ";
}
}