#include<iostream>
using namespace std;

class M  
{
	protected :
			 int ID,Salary;
	         string Name,Role;
	public :
			void setData()
			{
				cout <<"Enter Employee ID\t: ";
				cin >> ID;
				fflush(stdin);
				cout <<"Enter Employee Name\t: ";
	 		    getline(cin,Name);
	 		    cout <<"Enter Employee Role\t: ";
		 		getline(cin,Role);
		 		cout <<"Enter Empolyee Salary\t: ";
		 		cin >> Salary;
			}
};
class N
{
	protected:
			 int Salary,ID;
	        string Name,Role;
	public :
			void setValue()
			{
				cout <<"Enter Employee ID\t: ";
				cin >> ID;
				fflush(stdin);
				cout <<"Enter Employee Name\t: ";
	 		    getline(cin,Name);
	 		    cout <<"Enter Employee Role\t: ";
		 		getline(cin,Role);
		 		cout <<"Enter Empolyee Salary\t: ";
		 		cin >> Salary;
			}
};
class Employee : public M, public N
{
	private :
	
	 public:
	 	void getterM()
	 	{
	 	      	cout <<endl<<"ID\t: "<<M::ID<<endl
				     <<"NAME\t: "<<M::Name<<endl
				     <<"ROLE\t: "<<M::Role<<endl
				     <<"SALARY\t: "<<M::Salary<<endl<<endl;
		 }
		 	void getterN()
	 	{
	 	      	cout <<endl<<"ID\t: "<<N::ID<<endl
				     <<"NAME\t: "<<N::Name<<endl
				     <<"ROLE\t: "<<N::Role<<endl
				     <<"SALARY\t: "<<N::Salary<<endl;
		 }
};

int main()  
{
   Employee e;
   e.M::setData();
   e.getterM();
   e.N::setValue();
   e.getterN();
}
