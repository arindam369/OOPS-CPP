/*
42.	Write a class Employee having data member name, salary etc. Write proper constructors, methods to get/set them and a virtual method printDetails() that prints all information of a person. Now write two classes Manager and Clerk from Employee. Add ‘type’ and ‘allowance’ in the manager and Clerk respectively. Write constructors, methods to get/set them and a override printDetails(). Now create a Manager and a Clerk object and call printDetails() function on them to display their information.
Now Create an array of pointers to Employee and store addresses of two Employee, two Managers and two Clerks. Call printDetails() on all elements (a loop may be used). Also find the total salary drawn by all employees.
*/

#include<iostream>
using namespace std;
//                              Employee --> Manager
//                              Employee --> Clerk
class Employee{
    protected:
        string name;
        double salary;
    public:
        double totalSalary;
        void setData(string name,double salary){
            this->name = name;
            this->salary = salary;
            totalSalary = salary;
        }
        virtual void printDetails(){
            cout<<"   Employee"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Salary : "<<salary<<endl<<endl;
        }
};
class Manager:public Employee{
    string type;
    public:
        void setData(string name,string type,double salary){
            this->name = name;
            this->type = type;
            this->salary = salary;
            totalSalary = salary;
        }
        void printDetails(){
            cout<<"     Manager"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Type : "<<type<<endl;
            cout<<"Salary : "<<salary<<endl<<endl;
        }
};
class Clerk:public Employee{
    double allowance;
    public:
        void setData(string name,double allowance,double salary){
            this->name = name;
            this->allowance = allowance;
            this->salary = salary;
            totalSalary = salary;
        }
        void printDetails(){
            cout<<"     Clerk"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Allowance : "<<allowance<<endl;
            cout<<"Salary : "<<salary<<endl<<endl;
        }
};
int main(){
    Employee E1,E2;
    E1.setData("Dibyabrata Panja",6500);
    E2.setData("Faisal Ahmed",6000);

    Manager M1,M2;
    M1.setData("Arindam Halder","Top-Level Manager",4700);
    M2.setData("Souvik Naskar","Frontline Manager",4600);

    Clerk C1,C2;
    C1.setData("Rajdeep Mallick",1200,2000);
    C2.setData("Isika Samanta",1500,2500);

    cout<<"\n------------------------------\n\n";
    M1.printDetails();
    C1.printDetails();
    cout<<"------------------------------\n\n";

    Employee *ptrE[6];
    ptrE[0] = &E1;  ptrE[1] = &E2;
    ptrE[2] = &M1;  ptrE[3] = &M2;
    ptrE[4] = &C1;  ptrE[5] = &C2;

    double totalSalaryOfAllEmp = 0;

    for (int i = 0; i < 6; i++)
    {
        ptrE[i]->printDetails();
        cout<<"------------------------------\n\n";
        totalSalaryOfAllEmp += ptrE[i]->totalSalary;
    }
    cout<<"\n\tTotal Salary drawn by all Employees : "<<totalSalaryOfAllEmp<<" Rs.\n\n";

    return 0;
}