#include <bits/stdc++.h>
using namespace std;


class Account{
	private:
	float balance;
	protected:
	string accountno;
	public:
	string name;
	
Account(string accountno,string name,float balance){
    this->accountno = accountno;
    this->name = name;
    this->balance = balance;
}
void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid Deposit AMOUNT" << endl
                 << "Please Enter Correct AMOUNT" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid Withdrawal AMOUNT" << endl
                 << "Please Enter Correct AMOUNT" << endl;
        }
    }

    void checkBalance() {
        cout << "\nAccount Holder : " << name << endl;
        cout << "Account Number : " << accountno << endl;
        cout << "Current Balance: " << balance << endl;
    }
    
    void balanceonly(){
    cout << "Current Balance: " << balance << endl;	
	}

};

int main(){
	int t,d,w;
	string accountno, name;
	float balance;
	
	cout << "Enter the Account number , Name , and Balance of the customer : " << endl;
	cin >> accountno >> name >> balance;
	
	Account A(accountno,name,balance);
	

	cout << "Enter the value of the task you want to perform: \n1. Deposit\n2.Withdraw\n.3.Display info" << endl;
	cin >> t;
	
	switch(t){
		case 1:
			cout << "\nEnter the amount credited into the account: ";
            cin >> d;
            A.deposit(d);
            A.balanceonly();
            break;
        case 2:
        	cout << "Enter the amount debited from the account: ";
            cin >> w;
            A.withdraw(w);
            A.balanceonly();
            break;
        case 3:
        	A.checkBalance();
        	break;
        default :
        	cout << "Invalid choice" << endl;
	}
	

}
