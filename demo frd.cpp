#include<iostream>
using namespace std;

class B;

class A
{
	private :
		int a;
	public  :
		void Setter()
		{
			cout << "Enter A : ";
			cin  >> a;
		}
		friend void C(class A,class B);
};

class B
{
	private :
		int b;
	public  :
		void Setter()
		{
			cout << "Enter B : ";
			cin  >> b;
		}
		friend void C(class A,class B);
};


void C(A a1	,B b1)
{

	a1.Setter();
	b1.Setter();

	   cout <<"sum ="<<a1.a+b1.b<<endl;
    
}

int main()
{
	A a1;
	B b1;
	C(a1,b1);
}
