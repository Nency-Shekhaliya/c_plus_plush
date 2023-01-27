#include<iostream>
using namespace std;

class states
{
   private :
   	int i,n,id;
   	string  name;
   	static string language ;
   	public :
   	void setdata(int i,int n)
   	{
   		cout <<"Enter the ID : ";
   		cin >>id;
   		cout <<"("<<i+1 <<"/"<<n<<")"<<endl;
   		fflush(stdin);
   		cout<<"Enter the state Name\t: ";
   		getline(cin,name);
   	
	   }
	static void header()
	{
	  string language;
	cout  <<endl<<"---------------------------------------------------------------------------------------------------------------"<<endl
	      <<"ID"<<"\t\t\t"<<"STATES NAME"<<"\t\t\t"<<"LANGUAGE"<<endl
	      <<"-----------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	}	 
	void getdata()
	{
	cout <<id<<"\t\t"<<name<<"\t\t\t\t"<< language<<endl;
	  }  
};
string states :: language ="HINDI ";
int main()
{
	int n,i;

	cout <<"Enter number of states: ";
	cin >>n;
	states s[n];
	system("cls");
	for(i=0;i<n;i++)
	{
	   system("cls");
	   s[i].setdata(i,n);
    }
	 states ::header();
	for(i=0;i<n;i++)  s[i].getdata();
}
