#include<iostream>
using namespace std;

int main()
{
	int i;
	int a[5]={1,2,3,4,5};
	int n[5];
	for(i=0;i<5;i++)
	{
	   n[i]=a[i]*a[i]*a[i] ;
	}
	for(i=0;i<5;i++)
	cout << "n["<<i<<"]="<<n[i]<<endl;
}
