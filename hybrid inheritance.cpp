#include<iostream>
using namespace std;
class A
{
	protected :
		int a;
		public:
		void setdataA()
		{
			cout <<"Enter A\t: ";
			cin >>a;
		}
};
class B :public A
{
	protected :
		int b;
		public:
		void setdataB()
		{
			cout <<"Enter B\t: ";
			cin >>b;
		}
};
class C : public A
{
	protected :
		int c;
		public:
		void setdataC()
		{
			cout <<"Enter C\t: ";
			cin >>c;
		}
};
class D :public B ,public C
{
	private:
		int d;
		public:
		void setdataD()
		{
			cout <<"Enter D\t: ";
			cin >>d;
		}
		void getdata()
		{
			cout <<"------------"<<endl;
			cout <<"SUM\t: "<<B::a+b+c+d<<endl;
		}
};
int main ()
{
	D d1;
	d1.B::setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	d1.getdata();
	
}
