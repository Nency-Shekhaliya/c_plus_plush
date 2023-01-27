#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int a[5]={4,9,25,49,81};
	for(i=0;i<5;i++)
	{
		for(n=0;n<a[i];n++)
		{
			if(a[i]==n*n)
			{
				cout <<"a["<< i <<"]="<<n<<"\n";
			}
		}
	}
}
