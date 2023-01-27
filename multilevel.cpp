#include<iostream>
using namespace std;

class A
{
	protected:
		int id,salary,experience;
        long long int contact;	
		string  name, role,comp_name, address, email;
	public :
		void setterA()
		{
			cout <<endl<<"___________EMPLOYEE DETAILS___________"<<endl<<endl;
			cout <<"Enter Employee Id\t\t: ";
			cin >> id;
			fflush(stdin);
			cout <<"Enter Employee Name\t\t: ";
		    getline	(cin , name);
			fflush(stdin);
			cout <<"Enter Employee Role\t\t: ";
		    getline	(cin , role);
		}
};
class B : public A
{
	protected :
	
	public :
		void setterB()
		{
			cout <<"Enter Employee Experience\t: ";
			cin >> experience;
			cout <<"Enter Employee Salary\t\t: ";
			cin >> salary;
		}
};
class C : public B
{
	protected :
	public :
		void getterC()
		{
			cout <<endl<<"-------------Output C--------------"<<endl;
			cout <<endl<<"Name\t: "<<name<<endl
			     <<"Role\t: "<<role<<endl
			     <<"Salary\t: "<<salary<<endl<<endl;
		}
	void setterC ()
	{
		    fflush(stdin);
		    cout <<"Enter Employee Company name\t: ";
		    getline	(cin , comp_name);
		    cout <<"Enter Employee Address\t\t: ";
		    getline	(cin , address);
	}
};
class D : public C
{
   private :
   public :
    void setterD()
	{
		    cout <<"Enter Employee contact no.\t: ";
			cin >> contact;
			fflush(stdin);
		    cout <<"Enter Employee Email\t\t: ";
		    getline	(cin , email);
	}	
	void getterD()
	{ 
	    cout <<endl<<"- -- - -- - -- Main Output -- - -- - -- -"<<endl;
	    cout <<endl<<"Id\t\t: "<<id<<endl
		     <<"Name\t\t: "<<name<<endl
			 <<"Role\t\t: "<<role<<endl
			 <<"Experience\t: "<<experience<<endl
			 <<"Salary\t\t: "<<salary<<endl
			 <<"Company Name\t: "<<comp_name<<endl
			 <<"Address\t\t: "<<address<<endl
			 <<"Contact no.\t: "<<contact<<endl
			 <<"Email Id\t: "<<email<<endl;	 
	}
};
int main()
{
	D d;
	d.setterA();
	d.setterB();
	d.getterC();
	d.setterC();
	d.setterD();
	d.getterD();
}
