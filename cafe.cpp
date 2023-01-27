#include<iostream>
using namespace std;

class cafe
{
      private :
	  int id,rating,e_year,s_q;
	  string name,type,location;
	  public :
	  cafe(int id,string name,string type,int rating,string location,int e_year,int s_q)
	  {
	  	    cout<<endl<<"------------Enter Cafe Details----------"<<endl<<endl;
	  		cout <<"Id\t\t\t: ";
    		cin >>id;
    		fflush(stdin);
		    cout<<"NAME\t\t\t: ";
		    getline(cin,name);
		    cout<<"TYPE\t\t\t: ";
		    getline(cin,type);
		    cout<<"RATING\t\t\t: ";
		    cin>>rating;
		    fflush(stdin);
		    cout<<"LOCATION\t\t: ";
		    getline(cin,location);
		    cout<<"ESTABLISHING YEAR\t: ";
		    cin>>e_year;
		    cout<<"STAFF QUANTITY\t\t: ";
		    cin>>s_q;
		cout <<endl<<"-------Cafe Information-------"<<endl<<endl;
	  	cout <<"ID \t\t\t: "<<id<<endl;
	  	cout <<"NAME\t\t\t: "<<name<<endl;
	  	cout <<"TYPE\t\t\t: "<<type<<endl;
	  	cout <<"RATING\t\t\t: "<<rating<<endl;
	  	cout <<"LOCATION\t\t: "<<location<<endl;
	  	cout <<"ESTABLISHING YEAR\t: "<<e_year<<endl;
	  	cout <<"STAFF QUANTITY\t\t: "<<s_q<<endl;
		  }	
};

int main()
{
   int id,rating,e_year,s_q;
	string name,type,location;
	int i,n;
	cout<<"Enter the cafe :";
	cin >>n;
	for(i=0;i<n;i++)
	{
	  cafe c(id,name,type,rating,location,e_year,s_q);
    }
}



