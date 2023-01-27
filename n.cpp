#include <iostream>
using namespace std;
class Mansi
{
	private:
  int I;
  string n,C;
  float P,per;
  public :
  Mansi (int id,string name,string course,float per)
  {
  	cout <<"-----------PARAMETERIZED--------------"<<endl<<endl;
  	cout <<"ID        : "<<id<<endl
         <<"NAME      : "<<name<<endl
         <<"course    : "<<course<<endl
         <<"percentage: "<<per<<endl<<endl;
	  }	
  Mansi(Mansi &m)
	{
	    I=id;
		n=name;
	  	C=course;
	  	P=per;
	 cout<<"---------COPY----------"<<endl<<endl;
	 cout<<"ID        : "<<m.I<<endl
         <<"NAME      : "<<m.n<<endl
         <<"course    : "<<m.C<<endl
         <<"percentage: "<<m.P<<endl;	
	}
};

int main()
{

//	Nency N;
	Mansi m(1,"NENCY","M.F.D",89.25f);
	Mansi m1(m);

}
