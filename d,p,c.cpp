#include<iostream>
using namespace std;

class Nency
{
  private :
  	string name, course;
    int I,id;
  string n,C;
  float P,per;
  public :
    Nency ()
	{
	fflush(stdin);
	 cout <<"------------DEFAULT--------------"<<endl<<endl;
	  cout <<endl<<"Name   :Nency shekhaliya "<<endl
	       <<"Course :BBA "<<endl<<endl;
	}	
  Nency (int id,string name,string course,float per)
  {
  	n=name;
  	C=course;
  	P=per;
  	I=id;
  	cout <<"-----------PARAMETERIZED--------------"<<endl<<endl;
  	cout <<"ID        : "<<id<<endl
         <<"NAME      : "<<name<<endl
         <<"course    : "<<course<<endl
         <<"percentage: "<<per<<endl<<endl;
	  }	
  Nency(Nency &n)
	{
	
	 cout<<"---------COPY----------"<<endl<<endl;
	 cout<<"ID        : "<<n.I<<endl
         <<"NAME      : "<<n.n<<endl
         <<"course    : "<<n.C<<endl
         <<"percentage: "<<n.P<<endl;	
	}
};
int main()
{
	Nency N;
	Nency n(1,"NENCY","M.F.D",89.25f);
	Nency n1(n);
}
