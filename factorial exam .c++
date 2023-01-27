#include<iostream>
using namespace std;

int fact(int n)
{
	if(n<=1)
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
 	int a,ans;
 	cout <<"a : ";
 	cin >> a;
 	ans = fact(a);
 	cout << "factorial of "<< a << "=" << ans;
 }


