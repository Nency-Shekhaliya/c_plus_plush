#include<iostream>
using namespace std;
 
class A
{
	protected :
		int m ;
	public :
		void setvalue()
		{
			cout <<"Enter M : ";
			cin >>m;
		}	
};
class B : public A
{
    private :
  	public:
  		void square()
  		{
  		  cout <<" - - - - - SQUARE - - - - -"<<endl;
		  cout <<"\t"<<m*m<<endl<<endl;
		}
};
class C : public A
{
	private :
	public :
		void cube()
		{  
		    cout <<" - - - - - CUBE - - - - -"<<endl;
		    cout <<"\t"<<m*m*m<<endl;
		}
};
int main()
{
  B b;
  C c;
  b.setvalue();
  b.square();
  c.setvalue();
  c.cube();
}

