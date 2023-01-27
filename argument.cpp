#include<iostream>
using namespace std;

class demo
{
  private :
    int a,b,c,d;
	public :
	void setdata()
	{
		cout <<"Null "<<endl;
	}	
	void setdata(int a)
	{
		cout <<"value : "<<a<<endl;
	
	}
	void setdata(int a,int b)
	{
		cout <<"SUM : "<<a+b<<endl;
		
	}
		void setdata(int a,int b,int c)
	{
		cout <<"MULTIPLICTON : "<<a*b*c<<endl;
		
	}
};int main()
{
	demo d;
	d.setdata(10,20);
}
