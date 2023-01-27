#include<iostream>
using namespace std;

class student
{
   private :
   char name[100];
   int id,std;
   float per;
   public :
   void setvalue()
   {
   	 cout <<"Enter the ID\t\t: ";
   	 cin >>id;
   	 fflush(stdin);
   	 cout <<"Enter the name\t\t:";
   	 cin>>name;
   	 cout <<"Enter the standard\t:";
   	 cin >>std;
   	 cout <<"Enter the percentage\t:";
   	 cin >>per;
	}	
	void header()
	{
	 cout <<"------------------------------------------------------------------"<<endl
	      <<"ID\t\t"<<"NAME\t\t"<<"STANDARD\t\t"<<"PERCENTAGE"<<endl
	      <<"------------------------------------------------------------------"<<endl;
	}
	void getvalue()
	{
	 cout <<id<<"\t\t"<<name<<"\t\t\t"<<std<<"\t\t"<<per<<endl;	
	}	
};
int main()
{
	int i,n;
	cout <<"Enter number of student: ";
	cin >>n;
	student s[n];
	for(i=0;i<n;i++)
	{
		s[i].setvalue();
	}
	s[n].header();
	for(i=0;i<n;i++)
	{
		s[i].getvalue();
	}
}
