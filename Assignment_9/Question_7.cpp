#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	protected:
	int emp_code;
	string name;
	  public:
	  	int getid()
		 {
		 	return emp_code;
		 }
};
class Fulltime : public Employee
{
	int daily_rate, number_of_days, salary;
	  public:
	  	void accept_datail()
	  	 {
	  	 	cout<<"ID             : ";
	  	 	cin>>emp_code;
	  	 	cout<<"Name           : ";
	  	 	cin.get();
	  	 	getline(cin,name);
	  	 	cout<<"number_of_days : ";
	  	 	cin>>number_of_days;
	  	 	cout<<"Daily Rate     : ";
	  	 	cin>>daily_rate;
	  	 	salary=number_of_days*daily_rate;
		 }
		void display()
		 {
		 	cout<<"Employee Number : "<<emp_code<<endl;
		 	cout<<"Employee Name   : "<<name<<endl;
		 	cout<<"Salary          : "<<salary<<endl;
		 	cout<<"Status          : Full-Time"<<endl;
		 }
};
class Parttime : public Employee
{
	int number_of_working_hours, hourly_rate, salary;
	  public:
	  	void accept_datail()
	  	 {
	  	 	cout<<"ID                      : ";
	  	 	cin>>emp_code;
	  	 	cout<<"Name                    : ";
	  	 	cin.get();
	  	 	getline(cin,name);
	  	 	cout<<"Number of working hours : ";
	  	 	cin>>number_of_working_hours;
	  	 	cout<<"Hourly Rate             : ";
	  	 	cin>>hourly_rate;
	  	 	salary=number_of_working_hours*hourly_rate;
		 }
		void display()
		 {
		 	cout<<"Employee Number : "<<emp_code<<endl;
		 	cout<<"Employee Name   : "<<name<<endl;
		 	cout<<"Salary          : "<<salary<<endl;
		 	cout<<"Status          : Part-Time"<<endl;
		 }
};
int main()
{
	int ch1,i=0,j=0;
	Parttime p1[5];
	Fulltime f1[5];
	while(true)
	 {
	 	system("cls");
	 	cout<<"1.Enter Record"<<endl;
	 	cout<<"2.Display Record"<<endl;
	 	cout<<"3.Search Record"<<endl;
	 	cout<<"4.Quit"<<endl;
	 	cin>>ch1;
          switch(ch1)
           {
	 	       case 1:
	 		     int ch2;
	 		     cout<<"1.Part-time"<<endl;
	 		     cout<<"2.Full-time"<<endl;
	 		     cin>>ch2;
	 		     switch(ch2)
	 		       {
	 		 	     case 1:
	 		 	     	p1[i].accept_datail();
	 		 	     	i++;
   	 			        break;
	 			     case 2:
	 			     	f1[j].accept_datail();
	 			     	j++;
	 			 	    break;
			        }
			      break;
	 	       case 2:
	 	       	 for(int i1=0;i1<i;i1++)
	 	       	     {
	 	       	     	p1[i1].display();
	 	       	     	cout<<"---------------------------"<<endl;
					}
	 	       	 for(int j1=0;j1<j;j1++)
	 	       	     {
	 	       	     	f1[j1].display();
	 	       	     	cout<<"---------------------------"<<endl;
					 }
                     getch();
	 	       	 break;
	 	       case 3:
	 	       	 int id;
	 	       	 cout<<"Enter id : ";
	 	       	 cin>>id;
	 	       	 for(int i1=0;i1<i||i1<j;i1++)
	 	       	  {
	 	       	  	 if(id==p1[i1].getid())
	 	       	  	     {
	 	       	  	     	cout<<"---------------------------"<<endl;
	 	       	  	     	p1[i1].display();
						 }
	 	       	  	 if(id==f1[i1].getid())
	 	       	  	     {
	 	       	  	     	cout<<"---------------------------"<<endl;
	 	       	  	     	f1[i1].display();
						 }
				  }
				  getch();
				  break;
	 	       case 4:
	 		     exit(0);
		   }
	 }
	return 0;
}
