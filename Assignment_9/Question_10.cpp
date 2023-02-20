#include<iostream>
using namespace std;
class worker
{
  protected:
	int code;
	char name[20]; 
	float salary;
};
class officer
{
  protected:
	float DA, HRA;
};
class manager : public worker, public officer
{
	float TA,gsal;
	  public:
	  	void accept_detail()
	  	 {
	  	 	cout<<"----------------------------"<<endl;
	  	 	cout<<"Enter code   : ";
	  	 	cin>>code;
	  	 	cout<<"Enter Name   : ";
	  	 	cin>>name;
	  	 	cout<<"Enter Salary : ";
	  	 	cin>>salary;
	  	 	cout<<"Enert DA     : ";
	  	 	cin>>DA;
	  	 	cout<<"Enter HRA    : ";
	  	 	cin>>HRA;
	  	 	TA=salary*0.10;
	  	 	gsal=TA+DA+HRA+salary;
	     }
        void display()
         {
		    cout<<"----------------------------"<<endl;
		    cout<<"Code             : "<<code<<endl;
		    cout<<"Name             : "<<name<<endl;
		    cout<<"Salary           : "<<salary<<endl;
		    cout<<"DA               : "<<DA<<endl;
		    cout<<"HRA              : "<<HRA<<endl;
		    cout<<"TA               : "<<TA<<endl;
		    cout<<"Gross Salary     : "<<gsal<<endl;
		    
		 }
	 
};
int main()
{
	int n;
	cout<<"Enter Manager Count : ";
	cin>>n;
	manager m[n];
	for(int i=0;i<n;i++)
	 {
	 	cout<<"Enter Worker Information for "<<i+1<<endl;
	    m[i].accept_detail();
     }
    for(int i=0;i<n;i++)
      {
      	    cout<<"----------------------------"<<endl;
         	cout<<"Manager Information"<<endl;
         	m[i].display();
	  }
	return 0;
}
