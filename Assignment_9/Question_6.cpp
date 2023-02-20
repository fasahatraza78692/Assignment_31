#include<iostream>
using namespace std;
class Derived;
class Base
{
	int x;
	  public:
	  	Base(int x):x(x)
	  	{  }
	  	int getx()
	  	 {
	  	 	return x;
		 }
	  	friend void swap(Base &,Derived &);
};
class Derived
{
	int y;
	  public:
	  	Derived(int y):y(y)
	  	{  }
	  	int gety()
	  	 {
	  	 	return y;
		 }
	  	friend void swap(Base &,Derived &);
};
void swap(Base &b,Derived &d)
{
	b.x=b.x+d.y;
	d.y=b.x-d.y;
	b.x=b.x-d.y;
}
int main()
{
	Base b1(5);
	Derived d1(7);
	cout<<"Before swap..."<<endl;
	cout<<"Base    x = "<<b1.getx()<<endl;
	cout<<"Derived y = "<<d1.gety()<<endl;
	swap(b1,d1);
	cout<<"After swap..."<<endl;
	cout<<"Base    x = "<<b1.getx()<<endl;
	cout<<"Derived y = "<<d1.gety()<<endl;
	return 0;
}
