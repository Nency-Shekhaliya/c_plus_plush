#include<iostream>
using namespace std;

class Run 
{
   private :
   	int run ;
   	string name;
   	public :
   		Run()
   		{
   			
		}
   		Run (string name,int run)
   		{
   			this->run =run;
   			this->name=name;
		}
		void setrun (string name)
		{
			this->name=name;
		}
		
	    void getrun ()
   		{
   			cout <<"Name : "<<name<<endl;
            cout <<"Run :  "<<run <<endl;
		}
		Run operator++(int a)
		{
			Run tmp;
			tmp.run=this->run+50;
			return tmp;
		}
		Run operator--(int a)
		{
			Run tmp;
			tmp.run=this->run-20;
			return tmp;
		}
};
int main()
{
	Run r1("virat",100);
	r1.getrun();
	Run r2;
	r2 =r1++;
	r2.setrun("Dhoni");
	r2.getrun();
	Run r3;
	r3=r2--;
	r3.setrun("rohit");
	r3.getrun();
	
}
