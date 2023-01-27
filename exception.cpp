#include<iostream>
using namespace std;

class division
{
	private :
	double a,b;
	string Error="can't devided by zero";

	public :
		void setdata()
		{
			cout<<"--------------------------- Division --------------------------------"<<endl<<endl;
			cout <<"Enter A: ";
			cin >>a;
			cout <<"Enter B: ";
			cin >>b;
			try
			{
				if (b==0)
				{
					throw Error;
				}
				else 
				{
					cout <<"Division : "<<a/b<<endl<<endl;
				}
			}
			catch (string s)
				{
					cout <<Error<<endl<<endl;
				}
	}
};
class age
{
private :
	int age;
  string Vote="you can't vote";
	public :
		void setage()
		{
			cout <<"-----------------------------------  AGE   ------------------------"<<endl<<endl;
			cout <<"Enter Age: ";
			cin >>age;
			try 
			{
				if (age<=18)
				{
					throw Vote;
				}
				else
				{
					cout <<"you can vote"<<endl;
				}
			}	
			catch (string t)
			{
				cout <<Vote<<endl;
			}
		}
};
class upper
{
	private :
   	char password[100];
   	string pass=" Enter one letter of uppercase";
   	public :
   		void setpassword()
   		{
   			cout <<"-----------------------------------  PASSWORD   ------------------------"<<endl<<endl;
   			cout <<"Enter password : ";
   			cin >>password;
   			
   			try
   			{
   				if (password[100] >'A'&& password[100] <'Z')
   			   {
   				     throw pass;
			   }
			   else
			   {
			   	cout <<" Your password is strong "<<endl;
			   }
		}
			   catch (string v)
			   {
			   	 cout<< pass<<endl;
			   }
	    }
};
int main()
{
	division d;
	age a1;
	upper u1;
	d.setdata();
	a1.setage();
	u1.setpassword();
	
}

