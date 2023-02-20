#include<iostream>
using namespace std;
class Base
{
	protected:
	 int x,y;
	  public:
	  	void setValue()
	  	 { 
		    cin>>x>>y;
		 }
};
class Derived : public Base
{
	int s;
	public:
	void add()
	 {
	 	s=x+y;
	 }
 	void display()
 	 {
 	 	cout<<"Addition = "<<s;
	 }
};
int main()
{
	Derived d1;
	cout<<"Enter two numbers : ";
	d1.setValue();
	d1.add();
	d1.display();
	return 0;
}
