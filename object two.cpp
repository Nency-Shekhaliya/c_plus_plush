#include <iostream>
using namespace std;
class teacher;
class student
{
	private :
		int id;
		float per;
		string name,course;
		public :
			void setdata()
			{
				cout <<"Enter ID\t\t: ";
				cin >>id;
				fflush(stdin);
				cout <<"Enter NAME\t\t: ";
				getline(cin,name);
				fflush(stdin);
				cout <<"Enter course\t\t: ";
				getline(cin,course);
				cout <<"Enter PER\t\t: ";
				cin >>per;
			}
			void getdata()
			{
				cout <<"----------OUTPUT----------"<<endl;
				cout <<"ID\t\t: "<<id<<endl;
				cout <<"NAME\t\t: "<<name<<endl;
				cout <<"COURSE\t\t: "<<course<<endl;
				cout <<"PER\t\t: "<<per<<endl;			
			}
};
class teacher 
{
  private :
		int id;
		float per;
		student s;
		string name,course;
		public :
			void getdata(student s)
			{
			 s.getdata();	
			}
};
int main()
{
	student s;
	teacher t;
	s.setdata();
	s.getdata();
    t.getdata(s);
}

