// 23.	Create a simple class SavingsAccount for savings account used in banks as follows: Each SavingsAccount object should have three data members to store the account holder’s name, unique account number and balance of the account. Assume account numbers are integers and generated sequentially. Note that once an account number is allocated to an account, it does not change during the entire operational period of the account. The bank also specifies a rate of interest for all savings accounts created. Write relevant methods (such as withdraw, deposit etc.) in the class. The bank restricts that each account must have a minimum balance of Rs. 1000. Now create 100 SavingsAccount objects specifying balance at random ranging from Rs. 1,000 to 1,00,000. Now, calculate the interest for one year to be paid to each account and deposit the interest to the corresponding balance. Also find out total amount of interest to be paid to all accounts in one year.

#include<iostream>
#include<cmath>
using namespace std;

class SavingsAccount{
    char *name;
    
    float balance;
    float rateOfInterest;
    
    public:
        int acc_num;
        static int index;
        SavingsAccount(){
            index++;
            balance = rand()%99000 +1000 ;
            rateOfInterest =0.07;   // 7%
            acc_num=index;
            
        }
        void withdraw(double withdrawingMoney){
            if(balance-withdrawingMoney<1000){
                cout<<"Insufficient Balance...You can't withdraw this amount of money."<<endl;
            }
            else{
                balance -= withdrawingMoney;
                cout<<"Successfully withdrawn "<<withdrawingMoney<<" Rs. from Acc No. : "<<acc_num<<endl;
                cout<<"In Acc No. : "<<acc_num<<" Balance left : "<<balance<<" Rs."<<endl;
            }
        }
        void deposit(double depositingMoney){
            balance += depositingMoney;
            cout<<"Successfully deposited "<<depositingMoney<<" Rs. in Acc No. : "<<acc_num<<endl;
            cout<<"In Acc No. : "<<acc_num<<" Balance left : "<<balance<<" Rs."<<endl;
        }
        void displayBalance(){
            cout<<"In Acc No. : "<<acc_num<<" Balance left : "<<balance<<" Rs."<<endl;
        }
        double eachAccInterest(){
            double interest = balance*rateOfInterest*1;
            balance += interest;
            return interest;
        }
        void showAnnualInterest(){
            double myInterest = balance*rateOfInterest*1;
            cout<<"Total annual interest paid to account no. "<< acc_num <<" : "<<myInterest<<endl;
        }      
};
int SavingsAccount::index=0;

double total_interest_all(SavingsAccount accArr[],int n){
    double totalInterest_allAccount = 0;
    for (int i = 0; i < n; i++)
    {
        totalInterest_allAccount += accArr[i].eachAccInterest();
    }
    return totalInterest_allAccount;
}
int main(){
    SavingsAccount A[5];
    A[0].displayBalance();
    A[0].deposit(2000);    cout<<endl;

    A[1].displayBalance();
    A[1].withdraw(90000);  cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        A[i].showAnnualInterest();
    }


    cout<<"\nTotal Annual Interest paid to all acc from Bank : "<<total_interest_all(A,5)<<endl;


    return 0;
}