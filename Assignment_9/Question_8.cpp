#include<iostream>
using namespace std;
class Customer
{
  protected:
	string name;
	long long phone_number;
};
class Depositor : public Customer
{
  protected:
	int accno, balance;
};
class Borrower : public Depositor
{
	int loan_no, loan_amt;
     public:
     	void accept_detail()
     	 {
     	 	cout<<"Enter Customer Name      : ";
     	 	cin.get();
     	 	getline(cin,name);
     	 	cout<<"Enter Customer Phone No. : ";
     	 	cin>>phone_number;
     	 	cout<<"Enter Customer A/c No    : ";
     	 	cin>>accno;
     	 	cout<<"Enter Balance            : ";
     	 	cin>>balance;
     	 	cout<<"Enter Loan No            : ";
     	 	cin>>loan_no;
     	 	cout<<"Enter Loan Amount        : ";
     	 	cin>>loan_amt;
     	 	cout<<"------------------------------------------"<<endl;
		 }
		void display()
     	 {
     	 	cout<<"Details of Customer"<<endl;
     	 	cout<<"------------------------------------------"<<endl<<endl;
     	 	cout<<"Customer Name      : "<<name<<endl;
     	 	cout<<"Customer Phone No. : "<<phone_number<<endl;
     	 	cout<<"Customer A/c No    : "<<accno<<endl;
     	    cout<<"Balance            : "<<balance<<endl;
     	 	cout<<"------------------------------------------"<<endl<<endl;
			cout<<"Loan No            : "<<loan_no<<endl;
     	 	cout<<"Loan Amount        : "<<loan_amt<<endl;
     	 	cout<<"------------------------------------------"<<endl<<endl;
		 }
};
int main()
{
	int n;
	cout<<"Enter No. of Customer Details You Want : ";
	cin>>n;
	Borrower b[n];
	for(int i=0;i<n;i++)
	   b[i].accept_detail();
	for(int i=0;i<n;i++)
	   b[i].display();
	return 0;
}
