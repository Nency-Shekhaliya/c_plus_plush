#include<iostream>
using namespace std;

int main()
{
	float a,b;
	cout << "Enter A : ";
	cin  >> a;
	cout << "Enter B : ";
	cin  >> b;
	try
	{
		if(b==0)
		{
			throw true;
		}
		else
		{
			cout << "Division : " << a/b;
		}
	}
		catch(...)
		{
			cout << "can't divid zero";
		}
	}

