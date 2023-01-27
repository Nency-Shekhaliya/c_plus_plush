#include<iostream>
using namespace std;

class Train
{
	private :
		long long int train_no;
		string  train_name;
		string source;
		string destination;
		int id;
		string time;
		public:
			void setdata()
			{
				
				cout <<"Enter Train Id\t\t: ";
				cin >>id;
				fflush(stdin);
				cout <<"Enter Train no.\t\t: ";
				cin >>train_no;
				fflush(stdin);
				cout <<"Enter Train Name\t: ";
				getline (cin,train_name);
	        	fflush(stdin);
				cout <<"Enter Source\t\t: ";
				getline(cin,source);
				fflush(stdin);
				cout <<"Enter Destination\t: ";
				getline(cin,destination);
                cout <<"Enter Time\t\t: ";
                cin >>time;
                fflush(stdin);
			}
			void header ()
			{
		        cout <<"-----------------------------------------------------------------------------"<<endl;
				cout <<"                            ADD TRAIN DETAILS                                "<<endl;
				cout <<"-----------------------------------------------------------------------------"<<endl;
		   		cout <<"ID\tTRAIN NUMBER\tTRAIN NAME\t\tTRAIN SOURCR\t\tTRAIN DESTINATION\tTRAIN TIME"<<endl<<endl;
			}
				void gettable()
			{
				cout <<id<<"\t"<<train_no<<"\t\t"<<train_name<<"\t\t"<<source<<"\t\t"<<destination<<"\t\t\t"<<time<<endl<<endl;
			}
			void gettable2()
			{
				
				cout <<id<<"\t"<<train_no<<"\t\t"<<train_name<<endl;
			}
		   void getdata(int s)
		   {
		     if(train_no==s)
		     
		   		cout <<id<<"\t"<<train_no<<"\t\t"<<train_name<<"\t\t"<<source<<"\t\t"<<destination<<"\t\t\t"<<time<<endl;
		   }
};
int main()
{
	int i,s;
	long long int train_no;
		string  train_name;
		string source;
		string destination;
		string time;
	cout <<"-------------------------------------------------------------------------"<<endl;
	cout <<"<<<<<<<<<<<<<<<<< WELCOM TO RAILWAY RESERVATION SYSYTEM >>>>>>>>>>>>>>>>>>"<<endl;
	cout <<endl<<"-------------------------------------------------------------------------"<<endl;
	cout <<"Enter the number of train\t: ";
	cin >>s;
	Train t[s];
    for(i=0;i<s;i++)
    {
    	t[i].setdata();
	}
	t[s].header();
	for(i=0;i<s;i++)
	{
	  t[i].gettable();
	}
	cout <<"\t\t\t\t";system("pause");
	system("cls");
	cout <<"*                        ENTER TRAIN NUMBER AND SHOW TRAIN DETAILS           *"<<endl<<endl;
	cout <<"ID\tTRAIN NUMBER\tTRAIN NAME"<<endl;
	cout <<"----------------------------------"<<endl;
	for(i=0;i<s;i++)
	{
	t[i].gettable2();
	}
	cout <<"---------------------------------"<<endl;
	cout <<"Enter Train no.\t: ";
	cin >>s;
	cout <<"---------------------------------"<<endl<<endl;  
	cout <<"******                                    SHOW TRAIN DETAILS                              ******"<<endl<<endl;
	cout <<"ID\tTRAIN NUMBER\tTRAIN NAME\t\tTRAIN SOURCE\t\tTRAIN DESTINATION\tTRAIN TIME"<<endl; 
	cout <<"---------------------------------------------------------------------------------------------------------"<<endl<<endl;
	for(i=0;i<s;i++)
	{
		t[i].getdata(s);
	}		  
}
