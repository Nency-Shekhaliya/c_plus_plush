#include<iostream>
using namespace std;

class Nency
{
  private :
  public :
  Nency (int id,string name,string course,float per)
  {
  	cout <<"ID        : "<<id<<endl
         <<"NAME      : "<<name<<endl
         <<"course    : "<<course<<endl
         <<"percentage: "<<per<<endl;
	  }	
 ~ Nency ()
  {
  	cout <<endl<<"...THE END...!"<<endl;
  }
};
int main()
{
	Nency N(1,"NENCY","M.F.D",89.25f);
}
 class Nency
{
  private :
  int I;
  string n,C;
  float P;
  
  public :
  Nency (int id,string name,string course,float per)
  {
  	n=name;
  	C=course;
  	P=per;
  	I=id;
  	cout <<"ID        : "<<id<<endl
         <<"NAME      : "<<name<<endl
         <<"course    : "<<course<<endl
         <<"percentage: "<<per<<endl;
	  }	
	Nency(Nency &N)
	{
	 cout<<"---------COPY----------"<<endl;
	 cout<<"ID        : "<<N.I<<endl
         <<"NAME      : "<<N.n<<endl
         <<"course    : "<<N.C<<endl
         <<"percentage: "<<N.P<<endl;	
	}
};
int main()
{
	Nency N(1,"NENCY","M.F.D",89.25f);
	Nency N1(N);
}
