#include<iostream>
using namespace std;
 
class A
{
	protected :
		int c ;
	public :
		void setvalue()
		{
			cout <<"Enter c : ";
			cin >>c;
		}	
};
class B : public A
{
    private :
  	public:
  		void square()
  		{
  		  cout <<"************ square ****************"<<endl;
		  cout <<c*c<<endl<<endl;
		}
};
class C : public A
{
	private :
	public :
		void cube()
		{  
		   cout <<"************ Cube ****************"<<endl;
		    cout<<c*c*c<<endl;
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

