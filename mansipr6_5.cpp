#include<iostream>
using namespace std;

class Stud
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
			cout <<"  Marks of "<< name <<"\t\t: "<<marks<<endl;
	  	  }
		int operator+(Stud s)
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
	Stud s,s1,s3,s4;
	cout<<endl<<"*******Student Marks Total*********"<<endl;
	s.setmarks("A/C");
	s.getmarks("A/C");
	s1.setmarks("ECO");
	s1.getmarks("A/C");
	s3.setmarks("S.P");
	s3.getmarks("S.P");
	s4.setmarks("B.A");
	s4.getmarks("B.A");
	int total=0;
	total+=s+s1;
	total+=s3++;
	total+=s4++;
	cout<<"--------------------------------"<<endl;
  	cout<<"  Total Marks\t\t: "<<total;
}


