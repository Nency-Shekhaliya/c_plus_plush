#include<iostream>
using namespace std;

inline int fact(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
	return n*fact(n-1);
		
	}
}
int main()
{
	int a[5]={3,4,5,6,7};
	int b[5];
	
	b[0]=fact(a[0]);
	cout <<"factorial "<< a[0] << "=" << b[0] <<endl;
	b[1]=fact(a[1]);
	cout <<"factorial "<< a[1] << "=" << b[1] <<endl;
	b[2]=fact(a[2]);
	cout <<"factorial "<< a[2] << "=" << b[2] <<endl;
	b[3]=fact(a[3]);
	cout <<"factorial "<< a[3] << "=" << b[3] <<endl;
	b[4]=fact(a[4]);
	cout <<"factorial "<< a[4] << "=" << b[4] <<endl;
	
}
