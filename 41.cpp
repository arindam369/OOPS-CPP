/*
41.	Write a class Person having data member name, age, height etc. Write proper constructors, methods to get/set them and a method printDetails() that prints all information of a person. Now write another class Student from Person and add data members roll, year of admission etc. Write constructors, methods to get/set them and a override printDetails(). Now create a Person and a Student object and call printDetails() function on them to display their information.
    Now Create an array of pointers to Person and store addresses of two Persons and two Students. Call printDetails() on all elements (a loop may be used). Are you getting output which is supposed to come? Make printDetails() function virtual in the base class and check the result.
*/

#include<iostream>
using namespace std;
class Person{
    protected:
        string name;
        int age;
        double height;
    public:
        Person(){}
        void setData(string name,int age,double height){
            this->name = name;
            this->age = age;
            this->height = height;
        }
        void virtual printDetails(){    // virtual functions will tell the compiler to take decision at runtime
            cout<<"     Person \n";
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Height : "<<height<<endl<<endl;
        }
};
class Student: public Person{
    int rollNum;
    int yearOfAdmission;
    public:
        Student(){}
        void setData(string name,int rollNum,int age,double height,int yearOfAdmission){
            this->name = name;
            this->rollNum = rollNum;
            this->age = age;
            this->height = height;
            this->yearOfAdmission = yearOfAdmission;
        }
        void printDetails(){
            cout<<"     Student \n";
            cout<<"Name : "<<name<<endl;
            cout<<"Roll No. : "<<rollNum<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Height : "<<height<<endl;
            cout<<"Year of Admission : "<<yearOfAdmission<<endl<<endl;
        }
};
int main(){
    Person P1,P2;
    P1.setData("Arindam Halder",19,160);
    P2.setData("Naruto Uzumaki",20,180);
    // P1.printDetails();    P2.printDetails();

    Student S1,S2;
    S1.setData("Arindam Halder",123,19,160,2020);
    S2.setData("Naruto Uzumaki",135,20,180,2019);
    // S1.printDetails();    S2.printDetails();

    Person *ptrP[2],*ptrS[2];
        
    ptrP[0] = &P1;      ptrP[1] = &P2;
    ptrS[0] = &S1;      ptrS[1] = &S2;

    for (int i = 0; i < 2; i++)
    {
        ptrP[i]->printDetails();
        ptrS[i]->printDetails();
    }


    return 0;
}
/*  NOTE : 

[.] Base class ptr can access only base class properties
[.] If we want that Base class ptr can access the derived class properties ... then we have to use virtual functions to achieve run time polymorphism.
    If we add the "virtual" keyword in the function then compiler will understand and take decision at runtime instead of taking decision at compile time
        Then, at runtime, the compiler will check whether the base class ptr is pointing to base class obj or not.
            If, it is pointing to base class obj then base class properties will be executed,
            Else, derived class properties will be executed
*/
