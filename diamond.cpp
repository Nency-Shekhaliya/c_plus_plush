#include<iostream>
using namespace std;

class diamond
{
	private :
	int id, s_q,  rev, import, ex ,i,n;
	string ceo_name , name;
    public :
    	diamond (int id,string name,int s_q, int rev,int import,int ex ,string ceo_name)
    	{
    		cout <<"company id\t\t\t: ";
    		cin >>id;
    		fflush(stdin);
		    cout<<"company NAME\t\t\t: ";
		    getline(cin,name);
		    cout<<"company STAFF QUN\t\t: ";
		    cin>>s_q;
		    cout<<"company REVENUE\t\t\t: ";
		    cin>>rev;
		    cout<<"company IMPORT ROW\t\t: ";
		    cin >>import;
		    cout<<"company EXPORT\t\t\t: ";
		    cin>>ex;
		    fflush(stdin);
		    cout<<"company CEO NAME\t\t: ";
		    getline(cin,ceo_name);
		    cout <<"--------------------------------"<<endl;
		    cout <<"            OUTPUT              "<<endl;
		    cout <<"--------------------------------"<<endl;
		    cout <<"company id\t\t\t: "<<id <<endl
    		     <<"company NAME\t\t\t: "<<name<<endl
    		     <<"company STAFF QUN\t\t: "<<s_q<<endl
    		     <<"company REVENUE\t\t\t: "<<rev<<endl
    		     <<"company IMPORT RAW\t\t: "<<import <<endl
    		     <<"company EXPORT\t\t\t: "<<ex<<endl
    		     <<"company CEO NAME\t\t: "<<ceo_name<<endl;
		    cout <<"************************************"<<endl;
		}

};
int main()
{
	int id, s_q,  rev, import, ex ,i,n;
	string ceo_name , name;
	cout <<"Enter the company : ";
	cin >>n;
	for(i=0;i<n;i++)
	{
	diamond d(id,name,s_q,rev,import,ex,ceo_name);
    }
	
}

