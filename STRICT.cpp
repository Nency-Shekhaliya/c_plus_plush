#include<iostream>
using namespace std;
class HOTEL 
{
   private :
   	int id,rating,staff,E_year,rooms;
   	string name,website,address,type;

   	
   	public: 
   	void setdata(int id,string name,string type,int rating,string address,int E_year,int staff,int rooms,string website)
   	{
   	
   	 cout <<"Enter Hotel id\t\t : "<<id<<endl;
   	 cout <<"Enter Hotel name\t : "<<name<<endl;
   	 cout <<"Enter Hotel type\t : "<<type<<endl;
   	 cout <<"Enter rating\t\t : "<<rating<<endl;
   	 cout <<"Enter Address\t\t : "<<address<<endl;
     cout <<"Enter Establishment year : "<<E_year<<endl;
	 cout <<"Enter staff\t\t : "<<staff<<endl ;
	 cout <<"Enter rooms\t\t : "<<rooms<<endl;
	 cout <<"Enter website\t\t :"<<website<<endl;

   }
   
};
int main()
{
  HOTEL H;
  H.setdata(1,"RAJ","HOTEL",3,"KAMREJ",2006,20,12,"RAJHOTEL.COM");
}


