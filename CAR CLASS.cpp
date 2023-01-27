#include<iostream>
using namespace std;

class car
{
	private :
		int car_id, car_release_year;
		char car_company_name[100],car_model[100],car_colour[100];
		public:
			void input()
			{
				cout << "Enter  car_id            : ";
				cin >> car_id;
				cout << "Enter  car_company_name  : ";
				cin >> car_company_name;
				cout << "Enter  car_colour        : ";
				cin >> car_colour;
				cout << "Enter  car_model         : ";
				cin >> car_model;
				cout << "Enter  car_release_year  : ";
				cin >> car_release_year;
			}
			void output()
			{
			
				cout <<" car_id            : " <<car_id <<endl;
				cout <<" car_company_name  : " <<car_company_name <<endl;
				cout <<" car_colour        : " <<car_colour <<endl;
				cout <<" car_model         : " << car_model <<endl;
				cout <<" car_release_year  : " <<car_release_year<<endl;
				
			}
};
int main()
{
	car c1,c2,c3,c4;
    c1.input();
	c2.input();
    c3.input();
    c4.input();

	c1.output();
	c2.output();
	c3.output();
	c4.output();
}

