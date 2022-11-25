/*
28.	Write a class for your Grade card. The grade card is given to each student of a department per semester. The grade card typically  contains the name of the department, name of the student, roll number, semester, a list of subjects with their marks and a calculated CGPA. Create 60 such grade cards in a 3rd semester with relevant data and find the name and roll number of student having highest CGPA.
*/

#include<iostream>
#include<cstring>
#define noOfSubject 5
using namespace std;

class GradeCard{
    private:
        string dname;
        int semester;
        string *subject;
        int *marks;
    public:
        string sname;
        int rollnum;
        double CGPA;
        void setData(string dname,string sname,int roll,int sem,string sub[],int marks[]){
            this->dname = dname;
            this->sname = sname;
            this->rollnum = roll;
            this->semester = sem;
            this->subject = new string[noOfSubject+1];
            for (int i = 0; i < noOfSubject; i++)
            {
                this->subject[i] = sub[i];
            }
            this->marks = new int[noOfSubject];
            for (int i = 0; i < noOfSubject; i++)
            {
                this->marks[i] = marks[i];
            }
            int sum_marks=0;
            for (int i = 0; i < noOfSubject; i++)
            {
                sum_marks += this->marks[i];
            }
            this->CGPA = sum_marks/(noOfSubject*10.0);
        }
};
int highest_CGPA_student_index(GradeCard G[]){
    double max_CGPA = 0,index;
    for (int i = 0; i < noOfSubject; i++)
    {
        if(G[i].CGPA > max_CGPA){
            max_CGPA = G[i].CGPA;
            index = i;
        }
    }
    return index;
}

int main(){
    GradeCard G[5];
    string sub[] = {"DSA","OOPS","DBMS","ASM","COA"};
    int marks[5][5] = {
        {90,95,90,85,80},
        {99,95,98,88,83},
        {93,96,92,83,84},
        {92,92,94,88,87},
        {93,85,92,85,82}
    };
    G[0].setData("IT","Arindam Halder",36,3,sub,marks[0]);
    G[1].setData("CSE","Souvik Naskar",105,3,sub,marks[1]);
    G[2].setData("ETCE","Rajdeep Mallick",50,3,sub,marks[2]);
    G[3].setData("IEE","Sayan Magi",79,3,sub,marks[3]);
    G[4].setData("IT","Isika Samanta",59,3,sub,marks[4]);

    int highIndex = highest_CGPA_student_index(G);
    cout<<"\n\t"<<G[highIndex].sname<<" (Roll No. : "<<G[highIndex].rollnum<<" ) has got Highest CGPA ("<<G[highIndex].CGPA<<") \n"<<endl;

    return 0;
}