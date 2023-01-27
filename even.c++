#include<iostream>
using namespace std;

ostream &t(ostream & output)
{
  return output<<"\t";
}
int main()
{
    int i,n;
    	int a[100];
    cout<<"enter the array size: ";
    cin >> n;
	cout <<"Enter the number :  ";
	for(i=0;i<n;i++)
	cin >> a[i];
	cout<<"________Output__________"<<endl;
	for(i=0;i<n;i++)
	{
	 if(a[i]%2==0)
	 {
	 	cout <<a[i]<<t;
	 }
    }
}
