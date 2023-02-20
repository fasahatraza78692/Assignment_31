#include<iostream>
using namespace std;
class Item
{
	protected:
	int item_no, price;
	string name;
};
class Discounted_Item : public Item
{
	int d_price;
	int discount_percent;
	  public:
	  	void accept_detail()
	  	 {
	  	 	cout<<"Enter Item Name    : ";
	  	 	cin.get();
	  	 	getline(cin,name);
	  	 	cout<<"Enter Item No.     : ";
	  	 	cin>>item_no;
	  	 	cout<<"Enter Item Price   : ";
	  	 	cin>>price;
	  	 	cout<<"Enter Item Percent : ";
	  	 	cin>>discount_percent;
	  	 	d_price=price-(price*discount_percent)/100;
	  	 	cout<<"-------------------------"<<endl;
		 } 
		void display()
		 {
		 	cout<<endl<<"-------------------------"<<endl;
		 	cout<<"Item Name        : "<<name<<endl;
		 	cout<<"Item No.         : "<<item_no<<endl;
		 	cout<<"Item Price       : "<<price<<endl;
		 	cout<<"Discount Percent : "<<discount_percent<<endl;
		 	cout<<"Discounted Price : "<<d_price<<endl;
		 }
		int getDiscount()
		 {
		 	return (price*discount_percent)/100;
		 }
		int getPrice()
		 {
		 	return price;
		 }
};
int main()
{
	int n,amount=0,discount=0;
	cout<<"How many items you want to enter : ";
	cin>>n;
	Discounted_Item Di1 [n];
	for(int i=0;i<n;i++)
	    Di1[i].accept_detail();
	for(int i=0;i<n;i++)
	    Di1[i].display();
	for(int i=0;i<n;i++)
	 {
	 	amount=amount+Di1[i].getPrice();
	 	discount=discount+Di1[i].getDiscount();
	 }
	cout<<"-------------------------"<<endl;
	cout<<"Total Price    : "<<amount<<endl;
	cout<<"Total discount : "<<discount<<endl;
	return 0;
}
