#include<iostream>
using namespace std;
class Parant
{
	protected:
	 int s1,s2,s3;
	 public:
	  void setValue()
	   {
	   	 cin>>s1>>s2>>s3;
	   }
};
class Child1 : public Parant
{
	protected:
	 float total;
	public:
		void add()
		 {
		 	total=s1+s2+s3;
		 }
};
class Child2 : public Child1
{
	float per;
	 public:
	 void percn()
	  {
	  	per=total/300*100;
	  }
	 void display()
	  {
	  	cout<<per;
	  }
};
int main()
{
	Child2 st1;
	cout<<"Enter morks of 3 sub : ";
	st1.setValue();
	st1.add();
	st1.percn();
	cout<<"Percenatge = ";
	st1.display();
	return 0;
}
