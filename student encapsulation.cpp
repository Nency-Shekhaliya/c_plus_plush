#include<iostream>
#include<string.h>
using namespace std;
class student 
{
   private :
   int stu_id,age;
   string stu_name,stu_course,stu_email,stu_city,stu_college;
   public :
   void setvalue()
   {
   	cout <<"Enter id\t\t: ";
   	cin >> stu_id;
   	fflush(stdin);
   	cout <<"Enter name\t\t: ";
   	getline(cin,stu_name);
   	cout <<"Enter stu_course\t: ";
   	getline(cin,stu_course);
   	cout <<"Enter stu_email\t\t: ";
   	getline(cin,stu_email);
   	cout <<"Enter stu_city\t\t: ";
   	getline(cin,stu_city);
   	cout <<"Enter stu_college\t: ";
   	getline(cin,stu_college);
	}	
	void getvalue()
	{
		
		cout <<"******** OUTPUT *********"<<endl;
		cout <<"ID\t\t\t: "<<stu_id<<endl;
		cout <<"NAME\t\t\t: "<<stu_name<<endl;
		cout <<"COURSE\t\t\t: "<<stu_course<<endl;
		cout <<"EMAIL\t\t\t: "<<stu_email<<endl;
	    cout <<"CITY\t\t\t: "<<stu_city<<endl;
		cout <<"COLLEGE\t\t\t: "<<stu_college<<endl;
	}
};
int main()
{
	student s1,s2,s3,s4,s5;
	s1.setvalue();
	s2.setvalue();
	s3.setvalue();
	s4.setvalue();
	s5.setvalue();
	s1.getvalue();
    s2.getvalue();
	s3.getvalue();
	s4.getvalue();
	s5.getvalue();				
}

