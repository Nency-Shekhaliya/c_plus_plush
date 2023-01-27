
#include<iostream>
using namespace std;

void swaparray(int a[],int b[])
{
 int i,n;
		for(i=0;i<=2;i++)
	{
		swap(a[i],b[i]);
	}	
}
int main()
{
    int i;
    int a[1]={10};
    int b[1]={30};
    swaparray (a,b);
    cout << "a[0] : "<<a[i] <<endl;
	cout << "b[0] : "<<b[i] <<endl;
}

