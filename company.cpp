#include<iostream>
using namespace std;

class 	Company 
{
    private:
	 int company_branch;
	 char company_name[100];
	public :
	
	void input ()
	{
		cout << "Enter company name : ";
		cin >> company_name;
		cout << "Enter company branch : ";
		cin >> company_branch;
		
	}
	void output()
	{
	    cout <<"----------OUTPUT---------"<<endl;
		cout <<"company name : "<<company_name <<endl;
		cout <<"company branch : "<<company_branch <<endl;
		
	}	
};
int main()
{
	Company c1;
	c1.input();
	c1.output();
}

