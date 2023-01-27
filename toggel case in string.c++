#include<iostream>
using namespace std;

int main()
{
    int i,n;
	char name[100];
	cout << "Enter the name : ";
	cin >> name;
    for(i=0;name[i]!=0;i++)
    {
      if(name[i]>='a' && name[i]<='z')
	  {
	    name[i]=name[i]-32 ;
	  }
	    else if(name[i]>='A' && name[i]<='Z')
	   {
	   name[i]=name[i]+32 ;
	   }
   }
   cout << "-------OUTPUt-------"<<endl;
    cout <<"convert toggel case= " << name; 
  
}
