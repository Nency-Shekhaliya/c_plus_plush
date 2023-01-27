#include<iostream>
using namespace std;

class employee
{
	private :
		int emp_id,emp_age,emp_salary,emp_experience;
		char emp_name[100],emp_role[100],emp_city[100],emp_company_name[100];
		public:
			void input()
			{
				cout << "Enter  id           : ";
				cin >> emp_id;
				cout << "Enter  name         : ";
				cin >> emp_name;
				cout << "Enter  role         : ";
				cin >> emp_role;
				cout << "Enter  age          : ";
				cin >> emp_age;
				cout << "Enter  salary       : ";
				cin >> emp_salary;
				cout << "Enter  experience   : ";
				cin >> emp_experience;
				cout << "Enter  city         : ";
				cin >> emp_city;
				cout << "Enter  company name : ";
				cin >> emp_company_name;	
			}
			void output()
			{
			
				cout <<"Employee id           : " <<emp_id <<endl;
				cout <<"Employee name         : " <<emp_name <<endl;
				cout <<"Employee role         : " <<emp_role <<endl;
				cout <<"Employee age          : " <<emp_age <<endl;
				cout <<"Employee salary       : " <<emp_salary <<endl;
				cout <<"Employee experience   : " <<emp_experience <<endl;
				cout <<"Employee city         : " <<emp_city <<endl;
				cout <<"Employee company name : " <<emp_company_name<<endl;
			}
};
int main()
{
	employee e1,e2,e3,e4,e5;
    e1.input();
	e2.input();
    e3.input();
    e4.input();
	e5.input();
	
	e1.output();
	e2.output();
	e3.output();
	e4.output();
	e5.output();
}

