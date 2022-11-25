/*
16.	Write two overloaded functions print() such that one prints the elements of a vector and the other prints elements of a matrix. Note that a vector and a matrix may be represented as a one-dimensional array and a two-dimensional array respectively.
*/

#include<iostream>
using namespace std;
void print(int vector[],int n){
    cout<<"Printing the elements of vector : \n";
    for (int i = 0; i < n; i++)
    {
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}
void print(int **matrix,int m,int n){
    cout<<"Printing the elements of the matrix : "<<endl;
    for (int i = 0; i < m ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int n,r,c;
    cout<<"Enter the no. of elements in the vector : ";     cin>>n;
    int *vector = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>vector[i];
    }
    print(vector,n);

    cout<<"\nEnter the no. of rows of the matrix : ";         cin>>r;
    cout<<"Enter the no. of cols of the matrix : ";         cin>>c;
    int **matrix = new int*[r];
    for (int i = 0; i < r; i++)
    {
        matrix[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>matrix[i][j];
        }
    }
    print(matrix,r,c);

    return 0;
}