#include<iostream>
using namespace std;

class point
{
	protected :
		int p=100;
};
class a:public point
{
	public :
		void setdataA()
		{
			cout <<"Add point : "<<p+12<<endl;
		}
};
class b :public point
{
      public :
      	void setdataB()
		{
			cout <<"point : "<<p-3<<endl;
		}
};
int main ()
{
   point p1;
   a a1;
   b b1;
   a1.setdataA();
   b1.setdataB();
}
