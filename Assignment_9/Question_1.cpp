#include<iostream>
using namespace std;
class Person
{
	string name;
	int age;
	public:
	   void setName()
	     {
	   	  getline(cin,name);
	     }
	   void setAge()
	     {
	   	  cin>>age;
	     }
	   int getAge()
	     {
	   	  return age;
	     } 
	   string getName()
	     {
	   	 return name;
	     }
};
class Employee : public Person
{
	int empid,salary;
	  public:
	    void setEmpid()
	     {
	     	cin>>empid;
		 }
		void setSalary()
		 {
		 	cin>>salary;
		 }
		int getEmpid()
		 {
		 	return empid;
		 }
		int getSalary()
		 {
		 	return salary;
		 }
};
int main()
{
	Person p1;
	Employee e1;
	cout<<"Enter Employee name  ";
	e1.setName();
	cout<<"Employee id ";
	e1.setEmpid();
	cout<<"Employee age ";
	e1.setAge();
	cout<<"Employee salary ";
	e1.setSalary();
	cout<<"Name    : "<<e1.getName()<<endl;
	cout<<"ID      : "<<e1.getEmpid()<<endl;
	cout<<"Age     : "<<e1.getAge()<<endl;
	cout<<"Salary  : "<<e1.getSalary();
	
	return 0;
}
