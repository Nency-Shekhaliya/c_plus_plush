#include<iostream>
using namespace std;

class Circle
{
	private :
		int r=8;
		float pi=3.14;
	public :
		virtual void calculate(int n)=0;
		void circle()
		{
		   cout <<"Area of Circle\t  : "<<pi*r*r<<endl;
		}
	};
class  Triangle : public Circle
{
	private :
		int b=3;
		int h=8;
     public :
     	
		void triangle ()
		{
			cout <<"Area of Triangle  : "<<0.5*b*h<<endl;
		}	
};
class  Rectangle :public Triangle
{
	private :
		int l=5;
		int w=6;
		public :
		void rectangle()
		{
		  cout <<"Area of Rectangle : "<<l*w<<endl;	
		}	
};
class Ans : public Rectangle
{
		public :
	    void calculate(int n)
	    {
	 	cout <<"Calculated"<<endl;
	    }
	    void ans()
	     {
	   	  circle ();
		  triangle();
		  rectangle();
	     }
};
int main()
{
	Ans a;
	a.ans();
}



