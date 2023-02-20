#include<iostream>
using namespace std;
class Student
{ 
  protected:
   int id;
   string name;
      public:
	    	
};
class StudentExam : public Student
{
	protected:
		int sub1,sub2,sub3,sub4,sub5,sub6;
	public:
		void accept_detail()
		 {
		 	cout<<"Enter Roll No.             : ";
		 	cin>>id;
		 	cout<<"Enter Student Name         : ";
		 	cin.get();
		 	getline(cin,name);
		 	cout<<"Enter Marks for Subject 1  : ";
		 	cin>>sub1;
		 	cout<<"Enter Marks for Subject 2  : ";
		 	cin>>sub2;
		 	cout<<"Enter Marks for Subject 3  : ";
		 	cin>>sub3;
		 	cout<<"Enter Marks for Subject 4  : ";
		 	cin>>sub4;
		 	cout<<"Enter Marks for Subject 5  : ";
		 	cin>>sub5;
		 	cout<<"Enter Marks for Subject 6  : ";
		 	cin>>sub6;
		 }
		
};
class StudentResult : public StudentExam
{
	float percentage;
	 public:
	 	void disp_marklist()
	 	 {
	 	 	percentage=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
	 	 	cout<<"---------------------------------------"<<endl;
            cout<<"********** Student Marklist ***********"<<endl;
	 	 	cout<<"---------------------------------------"<<endl;
	        cout<<"Roll No.            : "<<id<<endl;
	        cout<<"Student Name        : "<<name<<endl<<endl;
	        cout<<"Marks of Subject 1  : "<<sub1<<endl;
	        cout<<"Marks of Subject 2  : "<<sub2<<endl;
	        cout<<"Marks of Subject 3  : "<<sub3<<endl;
	        cout<<"Marks of Subject 4  : "<<sub4<<endl;
	        cout<<"Marks of Subject 5  : "<<sub5<<endl;
	        cout<<"Marks of Subject 6  : "<<sub6<<endl<<endl;
	        cout<<"Total Percentage    : "<<percentage<<endl;
	        cout<<"---------------------------------------"<<endl;
		 }
};
int main()
{
	int n;
	cout<<"Enter No. of Studwnts You Want? : ";
	cin>>n;
	StudentResult st[n];
	for(int i=0;i<n;i++)
	  st[i].accept_detail();
    for(int i=0;i<n;i++)
      st[i].disp_marklist();
	return 0;
}
