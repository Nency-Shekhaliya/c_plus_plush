#include<iostream>
using namespace std;

int main()
{

	char str[100];
	cout << " Enter the str : ";
	cin >> str;
	
	for( int i=0;i<str[i];i++)
	{
		if(str[i]>=47 && str[i]<=57)
		{
			cout << "str is  numeric";
		}
		else
		{
		    cout << " str is not numeric";
	    }
	}
}

