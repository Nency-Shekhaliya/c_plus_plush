#include<iostream>
using namespace std;

int sum()
{
	int a,b ;
	cout << "a: ";
	cin >>a;
	cout << "b: ";
	cin >> b;
	int sum =a+b;
	cout <<" sum of " << a << "&"<< b <<"="<< sum <<endl;
}
int sub()
{
	int a,b ;
	cout << "a: ";
	cin >>a;
	cout << "b: ";
	cin >> b;
	int sub=a-b;
	cout <<" sub of " << a << "&"<< b <<"="<< sub <<endl;
}
int mul()
{
	int a,b ;
	cout << "a: ";
	cin >>a;
	cout << "b: ";
	cin >> b;
	int mul =a*b;
	cout <<" mul of " << a << "&"<< b <<"="<< mul <<endl;
}
int div()
{
	int a,b ;
	cout << "a: ";
	cin >>a;
	cout << "b: ";
	cin >> b;
	int div =a/b;
	cout <<" div of " << a << "&"<< b <<"="<< div <<endl;
}
int mod()
{
	int a,b ;
	cout << "a: ";
	cin >>a;
	cout << "b: ";
	cin >> b;
	int mod =a%b;
	cout <<" mod of " << a << "&"<< b <<"="<< mod <<endl;
}
int main()
{
	int choice;
	do
	{
	cout << "Prees the 1 for + : "<<endl;
	cout << "Prees the 2 for - : "<<endl;
	cout << "Prees the 3 for * : "<<endl;
	cout << "Prees the 4 for / : "<<endl;
	cout << "Prees the 5 for % : "<<endl;
	
	cin >> choice ;
	switch(choice)
	                  {
		                case 1 : sum();
						         break ;
						case 2 : sub();
						         break ;
						case 3 : mul();
						         break ;
						case 4 : div();
						         break ;
					    case 5 : mod();
						         break ;	
					    default : cout << " ERROR >>>!!";			 	  
	                }
	            }
	                while(true);
}
