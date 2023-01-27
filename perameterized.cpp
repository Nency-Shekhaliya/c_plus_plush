#include<iostream>
using namespace std;

class Nency
{
  private :
  int id,per;
  string name,course;
  public :
  Nency (int id,string name,string course,float per)
  {
  	cout <<"ID        : "<<id<<endl
         <<"NAME      : "<<name<<endl
         <<"course    : "<<course<<endl
         <<"percentage: "<<per<<endl;
	  }	
};
int main()
{
	Nency N(1,"NENCY","M.F.D",89.25f);
}
