#include<iostream>
using namespace std;

class A  
{
	protected :
			 int id,salary;
	         string name,role;
	public :
				void setterA()
			{
				cout <<"-----   CLASS A   --------"<<endl<<endl;
				cout <<"Enter Employee ID\t: ";
				cin >> id;
				fflush(stdin);
				cout <<"Enter Employee Name\t: ";
	 		    getline(cin,name);
	 		    cout <<"Enter Employee Role\t: ";
		 		getline(cin,role);
		 		cout <<"Enter Empolyee Salary\t: ";
		 		cin >> salary;
			}
};
class B
{
	protected:
			 int salary,id;
	        string role,name;
	public :
			void setterB()
			{
	           cout <<"-----   CLASS B   --------"<<endl<<endl;
				cout <<"Enter Employee ID\t: ";
				cin >> id;
				fflush(stdin);
				cout <<"Enter Employee Name\t: ";
	 		    getline(cin,name);
				cout <<"Enter Employee Role\t: ";
		 		getline(cin,role);
		 		cout <<"Enter Empolyee Salary\t: ";
		 		cin >> salary;
				
			}
};
class Employee : public A , public B
{
	private :
	
	 public:
	 	void getterA()
	 	{
	 	      	cout <<endl<<"ID\t: "<<A::id<<endl
				     <<"NAME\t: "<<A::name<<endl
				     <<"ROLE\t: "<<A::role<<endl
				     <<"SALARY\t: "<<A::salary<<endl<<endl;
		 }
		 	void getterB()
	 	{
	 	      	cout <<endl<<"ID\t: "<<B::id<<endl
				     <<"NAME\t: "<<B::name<<endl
				     <<"ROLE\t: "<<B::role<<endl
				     <<"SALARY\t: "<<B::salary<<endl;
		 }
};

int main()  
{
   Employee e;
   e.A::setterA();
   e.getterA();
   e.B::setterB();
   e.getterB();
}
