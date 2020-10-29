#include<iostream>
#include<fstream>
using namespace std;
#define min_balance  500
class Bank
{
	string name;
	int cust_accno,balance;
	static int idno;
	
	public:
		Bank(string n)
		{
			name=n;
			cust_accno=idno;
			idno++;
			balance=1;
		}
		void Deposit(float amnt)
		{
			system("cls");
			balance+=amnt;
			if(balance>=min_balance)
			{
				balance-=amnt;
			balance+=amnt;
			cout<<"Amount of "<<amnt<<" deposited successfully in your account number "<<cust_accno<<endl<<"your current balance is "<<balance<<endl;
		    }
		    else
		    {
		    	balance-=amnt;
		    cout<<"minimum 500 rs has to be deposited for the first time "<<endl;
		}
		}
		void Withdraw(float amnt)
		{
			system("cls");
			if(balance-amnt>=min_balance)
			{
				balance-=amnt;
				cout<<"Withdrawl of amount "<<amnt<<" is successful"<<endl<<"your current balance is "<<balance<<endl;
			}
			else
			{
			cout<<"you cannot draw the amount because maintaining minimum balance i.e., 500 is must"<<endl;
			cout<<"your current balance is "<<balance<<endl;
		    }
		    
		}
		int getBalance()
		{
			system("cls");
			return balance;
		}
};
int Bank::idno=1000;
int main()
{
	string name;
	int deposit_amount,withdraw_amount,ch;
	cout<<"Enter your name\n";
	cin>>name;
	Bank b(name);
//	cout<<"Enter the amount you want to deposit ";
//	cin>>deposit_amount;
//	b.Deposit(deposit_amount);
//	cout<<"Enter the amoint you want to withdraw ";
//	cin>>withdraw_amount;
//	b.Withdraw(withdraw_amount);
while(1)
{
	
	system("cls");
	cout<<"****************************************************Banking system******************************************************"<<endl<<endl<<endl;
	cout<<"                   SELECT AN OPTION                     "<<endl;
	cout<<"1.Deposit amount "<<endl<<"2.Withdraw amount"<<endl<<"3.Check your Balance\n"<<"4.Exit"<<endl;
	cin>>ch;
	switch(ch)
	{
	      case 1: cout<<"Enter the amount you want to deposit ";
	              cin>>deposit_amount;
            	      b.Deposit(deposit_amount);system("pause");
            	      cout<<endl;
            	      break;
              case 2: cout<<"Enter the amount you want to withdraw ";
            	      cin>>withdraw_amount;
	              b.Withdraw(withdraw_amount);system("pause");
	              cout<<endl;
	              break;
	      case 3: cout<<"Mr/ms "<<name<<" your current balance is "<<b.getBalance()<<endl;system("pause");
	              break;
	      case 4: exit(0);cout<<endl;
	              break;
	      default: cout<<"Choose a valid option "<<endl;
	}
}
}