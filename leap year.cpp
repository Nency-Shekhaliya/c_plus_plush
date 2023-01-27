
#include<iostream>
using namespace std;

class Square
{ 
  private :
     int a;
     
	 public :
	 virtual void square(int n)=0;
	 void s()
	 {
	 	cout <<"-------SQUARE--------"<<endl;
	 	cout <<"Enter A : ";
        cin >>a;
	 	cout <<"Square : "<<a*a<<endl;
	 }
};
class Cube :public Square
{
	private :
		int b;
	public :
		void square(int n)
		{
			cout <<"Calculated"<<endl;
		}
		void C()
		{
			    s();
			    cout <<"--------CUBE-------"<<endl;
				cout <<"Enter B : ";
                cin >>b;
			    cout <<"Cube : "<<b*b*b<<endl;
		}
};
int main()
{
	Cube c;
	c.C();
}

 


























AIM : 2. Create an abstract class named Storage which have pure virtual function named dataBank(), setter named setData(), getter named getData(), attributes : numberOfData, typeOfData, dataSupplier, dataBuyer, isDataUsefull (either true or false). Give them proper dataTypes. Now illustrate scenario in which if you want to use Storage then you have to inherit it with another class named Customer which displays custName, custId, custContact.

Program :

#include<iostream>
using namespace std;

class Storage
{
	private :
		int a;
		string tod;
		string ds;
		string db;
		string du;
	public :
		virtual void databank(int n)=0;
		void setdatas()
		{
			cout<<endl<<"------------------Storage Details-----------------------"<<endl<<endl;
			cout<<"Enter Number of data\t: ";
			cin >>a;
			fflush(stdin);
			cout <<"Enter Types of data\t: ";
			getline(cin ,tod);
			cout <<"Enter Data Supplier\t: ";
			getline(cin ,ds);
			cout <<"Enter Data Buyer\t: ";
			getline(cin ,db);
			cout <<"Enter Data usefull\t: ";
			getline(cin ,du);
		}
		void getdatas()
		{
			cout<<endl<<"Number of data\t: "<<a<<endl
			    <<"Types of data\t: "<<tod<<endl
			    <<"Data Supplier\t: "<<ds<<endl
			    <<"Data Buyer\t: "<<db<<endl
			    <<"Data usefull\t: "<<du<<endl;
		}
};
class Customer :public Storage
{
	private :
		int id;
		string name;
		long long int contact ;
		
		public:
			void  databank(int n)
			{
				cout<<"Details"<<endl;
			}
			void setdata()
			{
			 cout<<endl<<"-------------------Customer Details-------------------"<<endl<<endl;
			  cout<<endl<<"Enter Customer Id\t: ";
			  cin >>id;
			  fflush(stdin);
			  cout <<"Enter Customer Name\t: ";
			  getline(cin ,name);
			  cout<<"Enter Customer Contact  : ";
			  cin >>contact;
			}
			void getdata()
			{
				setdatas();
				getdatas();
				setdata();
				cout<<endl<<"Customer Id\t: "<<id<<endl
				    <<"Customer Name\t: "<<name<<endl
				    <<"Customer Contact: "<<contact<<endl;
			}
};
int  main()
{
       Customer c;
      c.getdata();
}


