#include<iostream>
using namespace std;
class HOTEL 
{
   private :
   	int id,rating,staff,E_year,rooms;
   	string name;
   	static string types, location;
   	
   	public: 
   	void setdata(int i ,int n)
   	{
   	 cout <<"("<<i+1 <<"/"<<n<<")"<<endl;
   	 cout <<"Enter Hotel id: ";
   	 cin >> id;
   	 fflush(stdin);
   	 cout <<"Enter Hotel name : ";
   	 getline(cin,name);
   	 cout <<"Enter rating : ";
   	 cin >> rating;
     cout <<"Enter Enstblishing year : ";
	 cin >>E_year;
	 cout <<"Enter staff : " ;
	 cin >> staff;
	 cout <<"Enter rooms: ";
	 cin >>rooms;  	 
   }
  static void header()
   {
     string types;
     string location;
     cout <<endl;
     cout <<"****************************************HOTEL INFORMATION************************************************"<<endl;
     cout <<endl;
     cout <<"ID\tHOTEL NAME\tHOTEL TYPES\tHOTEL RATING\tHOTEL LOCATION\tE_YEAR\tHOTEL STAFF\tHOTEL ROOMS\t"<<endl
          <<"----   -----------    -------------    -------------   ---------------  -------  -----------    -----------    "<<endl;
   }
   void tableview()
   {
   	 cout << id <<"\t"<<name<<"\t"<<"\t"<<types<<"\t"<<"\t"<<rating<<"\t"<<"\t"<<location<<"\t"<<"\t"<<E_year<<"\t"<<"\t"<<staff<<"\t"<<rooms<<endl;
   }
};
string HOTEL ::types="Hotel";
string HOTEL ::location="SURAT";
int main()
{
	int n,i;
	cout <<"Enter number of Hotel : ";
	cin >> n;
    system("cls");
	HOTEL H[n];
	for (i=0;i<n;i++)
	{
	 system("cls");
	 H[i].setdata(i,n);
    }
	HOTEL :: header();
	for(i=0;i<n;i++) H[i].tableview();
}
