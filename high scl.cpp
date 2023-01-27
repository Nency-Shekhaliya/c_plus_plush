#include<iostream>
using namespace std;
class Highschool
{
    private :
    	int id,rollno,standard,age;
    	string name,address;
    	long long int contact;
    	static string schoolname;
    public :
    	void setdata()
    	{
    		cout<<endl<<"--------Details for School student----------"<<endl<<endl;
    		cout<<"Enter Id\t\t: ";
            cin >>id;
    		cout<<"Enter Rollno\t\t: ";
            cin >>rollno;
    	    fflush(stdin);
    		cout<<"Enter Name\t\t: ";
    		getline(cin,name);
    		cout<<"Enter Standard\t\t: ";
    	    cin >>standard;
    		cout<<"Enter Age\t\t: ";
    		cin >>age;
    		cout<<"Enter Contact\t\t: ";
    	    cin >>contact;
    	    fflush(stdin);
    		cout<<"Enter Address\t\t: ";
    	    getline(cin,address);
		}
	  void getdata()
	  {
	  	string schoolname="Ashadeep";
	cout <<"____________OUTPUT_____________"<<endl<<endl;
	cout <<"ID\t\t:"<<id<<endl
	  	 <<"Rollno\t\t:"<<rollno<<endl
	  	 <<"Name\t\t:"<<name<<endl
	  	 <<"Standard\t:"<<standard<<endl
	  	 <<"Age\t\t:"<<age<<endl
	  	 <<"Contact\t\t:"<<contact<<endl
	  	 <<"Address\t\t:"<<address<<endl
	    <<"schoolname\t:"<<schoolname<<endl;
	  }	
};
class college
{
	private :
    	int id,rollno,age;
    	string course;
    	string name,address;
    	long long int contact;
    	static string clg;
    public :
    	void setdata()
    	{
    		cout<<endl<<"--------Details for college student----------"<<endl<<endl;
    		cout<<"Enter Id\t\t: ";
            cin >>id;
    		cout<<"Enter Rollno\t\t: ";
            cin >>rollno;
    	    fflush(stdin);
    		cout<<"Enter Name\t\t: ";
    		getline(cin,name);
    		cout<<"Enter course\t\t: ";
    	    cin >>course;
    		cout<<"Enter Age\t\t: ";
    		cin >>age;
    		cout<<"Enter Contact\t\t: ";
    	    cin >>contact;
    	    fflush(stdin);
    		cout<<"Enter Address\t\t: ";
    	    getline(cin,address);
		}
	  void getdata()
	  {
	  	 string clg="s.d.jain";
	  	 cout <<"____________OUTPUT_____________"<<endl<<endl;
	  	 cout <<"ID\t\t:"<<id<<endl
	  	 <<"Rollno\t\t:"<<rollno<<endl
	  	 <<"Name\t\t:"<<name<<endl
	  	 <<"Course\t\t:"<<course<<endl
	  	 <<"Age\t\t:"<<age<<endl
	  	 <<"Contact\t\t:"<<contact<<endl
	  	 <<"Address\t\t:"<<address<<endl
	  	 <<"collegename\t:"<<clg<<endl;
	  }	
};
string Highschool ::schoolname="Ashadeep";
string college :: clg="s.d.jain";
int main()
{
	Highschool H;
	college c;
	H.setdata();
	H.getdata();
	c.setdata();
	c.getdata();
	
}

