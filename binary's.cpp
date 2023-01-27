#include<iostream>
using namespace std;

class student
{
  private:
  int marks;
  public :
		void setmarks(string name)
		   {
				cout <<"  "<<name;
				cout<<" Marks\t\t: ";
				cin >>marks ;
	      }	
		void getmarks(string name)
		  {
			cout <<"  Marks of "<<name<<"\t: "<<marks<<endl<<endl;
	  	  }
		int operator+(student s)
		  {
			return this->marks+s.marks;
			 
	      }
		int operator++(int a)
		  {
			return this->marks;
		  }
		int operator+=(int a)
		  {
			return this->marks;
		  }
	
};
int main()
{
	student s,s1,s3,s4;
	cout<<endl<<"-----------Student Marks Total----------"<<endl<<endl;
	s.setmarks("Maths");
	s.getmarks("Maths");
	s1.setmarks("Gujrati");
	s1.getmarks("Gujrati");
	s3.setmarks("English");
	s3.getmarks("English");
	s4.setmarks("Hindi");
	s4.getmarks("Hindi");
	int total=0;
	total+=s+s1;
	total+=s3++;
	total+=s4++;
	cout<<"-----------------------------------"<<endl;
  	cout<<"  Total Marks\t\t:  "<<total;
}
