#include<iostream>
using namespace std;
class N;
class  M
{
	private :
		int a,b;
	public :
		void setdata()
		{
			cout <<"Enter A : ";
			cin >>a;
			cout <<"Enter B : ";
			cin >>b;
		}
			friend void cube(M j,N s);
};
class N 
{
	private :
		int c,d;
	public :
		void setdata()
		{
			cout <<"Enter C : ";
			cin >> c;
			cout <<"Enter D : ";
			cin >> d;
		}
		friend void cube(M j,N s);

};
	void cube(M j,N s)
	{
	  j.setdata();
	  s.setdata();
      cout <<endl<<"Sum of A And C= "<<j.a+s.c<<endl<<"Sum of B and D = "<<j.b+s.d<<endl;
	}
int main ()
{
	M j;
	N s;
	cube(j,s);
}









