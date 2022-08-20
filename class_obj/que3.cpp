/*
Question

Define a class to represent a bank account. Include the following members:

Data members

(a) Name of the depositor
(b) Account number
(c) Type of account
(d) Balance amount in the account 

Member functions

(a) To assign initial values
(b) To deposit an amount
(c) To withdraw an amount after checking the balance
(d) To display name and balance

Write a main program to test the program
*/


#include <iostream>
#include <string>
using namespace std;

class bank{
    string name;
    long int acc_no;
    string type;
    int balance;
    int depos=0;
    int with=0;

    public:
        void set_data();
        void deposite();
        void withdraw();
        void display();
        void display_bal();
};

void bank :: set_data(){
    cout<< "Enter name: ";
    cin>> name;
    cout<< "Account type: ";
    cin>> type;
    cout<< "Account Number: ";
    cin>> acc_no;
    cout<< "Initial balance: ";
    cin>> balance;
}

void bank :: deposite(){
    cout<< endl<< "Desositing in Account number "<< acc_no<< endl<< "Enter amount: ";
    cin>> depos;

    balance += depos;
}

void bank :: withdraw(){
    int choice;
    cout<< endl<< "Do want to check your balance before withdrawing from the account?"<< endl
        << "Press 1. YES"<< endl
        << "Press 2. NO"<< endl
        << "Enter here: ";
    cin>> choice;

    if(choice== 1){
        cout<< "Balance Available: Rs"<< balance<< endl;
        cout<< "Want to continue with withdrawing?"<< endl
            << "Press 1. YES"<< endl
            << "Press 2. NO"<< endl
            << "Enter here: ";
        cin>> choice;
        if(choice== 1){
            goto mark;
        }
        else{
            goto mark2;
        }
    }

mark:   cout<< endl<< "How much amount want to withdraw: Rs ";
        cin>> with;

        balance -= with;
mark2:  cout<< endl;
}

void bank :: display(){
    cout<< endl
		<< "        Account Holder Details"<< endl
		<< "|-----------------------------------|"<< endl
        << "|->  Name: "<< name<< endl
        << "|->  Account type: "<< type<< endl
        << "|->  Account number: "<< acc_no<< endl
        << "|->  Available Balance: Rs "<< balance<< endl
		<< "|-----------------------------------|"<< endl;
}

void bank :: display_bal(){
    cout<< endl<< "Available Balance: Rs "<< balance<< endl;
}
int main(){
    bank b1;
    int exitx= 0;
    int select;

    b1.set_data();

    while (exitx!=1){
        cout<< endl
			<<"1. To View Account details"<< endl
            << "2. To deposite amount"<< endl
            << "3. To withdram"<< endl
            << "4. To show only Balance"<< endl
            << "5. To exit."<< endl
            << "  Enter Here: ";
        cin>> select;

        switch (select){
            case 1:
                b1.display();
                break;
            case 2:
                b1.deposite();
                break;
            case 3:
                b1.withdraw();
                break;
            case 4:
                b1.display_bal();
                break;
            case 5:
                exitx= 1;
                break;
            default:
                cout<< "Invaild Input... Try Again: "<< endl;
                break;
        }
    }
	cout<< "Thank You!"<< endl;
    return 0;
}