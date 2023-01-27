 /*WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.*/

#include<iostream>
using namespace std;

class Admin
{
   protected :
     string name,can;
	 int staff ,m_salary,e_salary,revenue;
	public :
		void myAccess()
		{
			fflush(stdin);
			cout <<"Enter company name : ";
			getline(cin,name);
			cout <<"Enter manager salary: ";
			cin >>m_salary;
			cout <<"Enter employee salary: ";
			cin >>e_salary;
			cout <<"Enter total staff : ";
			cin >> staff;
			cout <<"Enter revenue : ";
			cin >> revenue;
		}
		void myAccess()
		{
			cout <<"---------------ADMIN------------------"<<endl<<endl;
			cout <<"Company name : "<<name <<endl
			     <<"Manager salary: "<<m_salary<<endl
			     <<"Employee salary : "<<e_salary<<endl
			     <<"Total staff :  "<<staff<<endl
			     <<"Revenue : "<<revenue <<endl<<endl;
		}
};
class manager : public Admin
{
	private :
	public :
		void myAccess()
		{
				fflush(stdin);
			cout <<"---------------MANAGER------------------"<<endl<<endl;
			cout <<"Company name : "<<name <<endl
			     <<"Manager salary: "<<m_salary<<endl
			     <<"Employee salary : "<<e_salary<<endl
			     <<"Total staff :  "<<staff<<endl
			     <<"Revenue : "<<revenue <<endl<<endl;
		}
};
class Employee : public manager
{
   private :
   	public :
   		void myAccess()
   		{
//   			myAccess();
//   			myAccess();
//   			myAccess();
   			cout <<"---------------EMPLOYEE------------------"<<endl<<endl;
   			cout <<"Company name : "<<name <<endl
   			    <<"Employee salary : "<<e_salary<<endl
   			    <<"Total staff :  "<<staff<<endl;
   			
		}
};
int main()
{
	Employee e1;
	e1.Admin::myAccess();
	e1.manager::myAccess();
	e1.Employee::myAccess();
}
