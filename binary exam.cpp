#include<iostream>
using namespace std;
class student 
{
  private :
    int marks;
  public :
  void setmarks(string name)
  {
  	cout <<"subject : "<<name<<endl;
  	cout <<"Marks : ";
  	cin >>marks;
 }
 void getmarks()
 {
 	cout <<"Marks : "<<marks <<endl;
	 }	
 int operator+(student Eng)
 {
 	return this->marks+Eng.marks;
  } 
};
int main()
{
	student Guj,Eng;
	int total;
	Guj.setmarks("Gujrati");
	Guj.getmarks();
	
	
	
}
