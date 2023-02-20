#include<iostream>
#include<cstring>
using namespace std;
class Person
{
	protected:
    	string name,address;
	    long long phone_no;
};
class Employee : public Person
{
	protected:
		int eno;
		string ename;
	public:
		string getName()
		 {
		 	return ename;
		 }
	
};
class Manager : public Employee
{
	protected:
	string designation,department_name;
	int basic_salary;
	 public:
	 	int getSalary()
	 	 {
	 	 	return basic_salary;
		 }
		void acceptDetail()
		 {
		 	cout<<"Enter Details of Manager"<<endl;
	 	    cout<<"-----------------------------"<<endl;
	 	    cout<<"Enetr Employee No.  : ";
		    cin>>eno;
		    cout<<"Enter Name          : ";
		    cin.get();
	        getline(cin,ename);
	    	cout<<"Enter Address       : ";
	    	cin.get();
	    	getline(cin,address);
			cout<<"Enter Phone No.     : ";
			cin>>phone_no;
			cout<<"Enter Designation   : ";
			cin.get();
			getline(cin,designation);
			cout<<"Enter Department    : ";
			cin.get();
			getline(cin,department_name);
			cout<<"Enter Basic Salary  : ";
			cin>>basic_salary;
		 }
		
};
int main()
{
	int n,temp=0;
	cout<<"How many Managers you want to Enter ?  : ";
	cin>>n;
	Manager manager[n];
	 	for(int i=0;i<n;i++)
	 	 	manager[i].acceptDetail();
	 	for(int i=1;i<n;i++)
	 	    if(manager[temp].getSalary()<manager[i].getSalary())
	 	        temp=i;
    cout<<"Manager with Heighest salary is : "<<manager[temp].getSalary()<<endl;
    cout<<"And, Manager name is : "<<manager[temp].getName();
	return 0;
}
