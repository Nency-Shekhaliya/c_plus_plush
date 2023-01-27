#include <iostream>
using namespace std;

class Employee 
{
	private :
		int id ,salary,expe;
		string name ,role,address,email;
		long long int contact;
		public :
			void setdata()
			{
				cout <<"Enter ID\t\t: ";
				cin >>id;
				fflush(stdin);
				cout <<"Enter NAME\t\t: ";
				getline(cin,name);
				cout <<"Enter ROLE\t\t: ";
				getline(cin,role);
				cout <<"Enter SALARY\t\t: ";
				cin >> salary;
				cout <<"Enter EXPERIENCE\t: ";
				cin >>expe;
				fflush(stdin);
				cout <<"Enter ADDRESS\t\t: ";
				cin >>address;
				cout <<"Enter EMAIL\t\t: ";
				cin >>email;
				cout <<"Enter CONTACT\t\t: ";
				cin >> contact;
			}
		 void getdata()
		 {
		 	cout <<"- - - - - - - - - - - - - - OUTPUT - - - - - - - - - -  - -"<<endl;
		    cout <<"ID\t\t:"<<id<<endl<<"NAME\t\t:"<<name<<endl<<"ROLLNO\t\t:"<<role<<endl<<"SALARY\t\t:"<<salary<<endl
			<<"EXPERIENCE\t:"<<expe<<endl<<"ADDRESS\t\t:"<<address<<endl<<"EMAIL\t\t:"<<email<<endl<<"CONTACT\t\t:"<<contact<<endl;	
		 }	
};
int main ()
{
	int i,n;

	 cout <<"Enter no.Employee : ";
	 cin >>n;	
	Employee e[n];
	for(i=0;i<n;i++)
	{
		system("cls");
		e[i].setdata();
	}

	for(i=0;i<n;i++)
	{
		e[i].getdata();
	}
}

