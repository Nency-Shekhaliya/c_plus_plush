#include<iostream>
#include<string.h>
using namespace std;
class customer
{
   private :
   int cust_id,age,SIM_v;
   long long int mo;
   string cust_name,brand_name,cust_city;
   public :
   void setvalue()
   {
   	cout <<"Enetr id\t\t: ";
   	cin >> cust_id;
   	fflush(stdin);
   	cout <<"Enter name\t\t: ";
   	getline(cin,cust_name);
   	cout <<"Enter age\t\t: ";
    cin >> age;
    fflush(stdin);
   	cout <<"Enter brand_name\t: ";
   	getline(cin,brand_name);
   	cout <<"Enter mobile\t\t: ";
   	cin >>mo;
   	fflush(stdin);
   	cout <<"Enter cust_city\t\t: ";
   	getline(cin,cust_city);
   	cout <<"Enter SIM.validity\t: ";
   	cin >>SIM_v;
	}	
	void getvalue()
	{
		cout <<"******** OUTPUT *********"<<endl;
		cout <<"ID\t\t\t\t: "<<cust_id<<endl;
		cout <<"NAME\t\t\t\t: "<<cust_name<<endl;
		cout <<"Age\t\t\t\t: "<<age<<endl;
		cout <<"Brand name\t\t\t: "<<brand_name<<endl;
	    cout <<"Mobile no.\t\t\t: "<<mo<<endl;
		cout <<"CITY\t\t\t\t: "<<cust_city<<endl;
		cout <<"SIM.validity\t\t\t: "<<SIM_v<<endl;
	}
};
int main()
{
    customer c1,c2,c3,c4,c5;
	c1.setvalue();
	c2.setvalue();
	c3.setvalue();
	c4.setvalue();
	c5.setvalue();
	c1.getvalue();
    c2.getvalue();
    c3.getvalue();
    c4.getvalue();
    c5.getvalue();     				
}

