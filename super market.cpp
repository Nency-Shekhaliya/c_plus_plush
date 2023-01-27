#include<iostream>
using namespace std;

class Market
{
	private :
		int no,qun,discount;
		int tax;
		string name;
		
	public :
		void setdata()
		{
		    cout <<"Enter Item no.\t\t: ";
		    cin >>no;
		    fflush(stdin);
		    cout <<"Enter Item name\t\t: ";
		    getline(cin ,name);
		    cout <<"Enter Item Quntity\t: ";
		    cin >>qun;
		    cout <<"Enter Item Tax\t\t: ";
		    cin >>tax;
		    cout <<"Enter Item Discount\t: ";
		    cin >>discount;
		}
		void header()
        {
          cout <<endl<<endl<<"Number\tItem Name\tItam Quantity\tItemTax\t\tItem Discount"<<endl
               <<"----------------------------------------------------------------------------------------"<<endl;
        }
		void getdata()
		{
			cout <<no<<"\t"<<name<<"\t\t"<<qun<<"\t\t"<<tax<<"%"<<"\t\t"<<discount<<endl;
		}
	    void settable(Market &m2)
	    {
	    	if(this->no>m2.no)
	    	{
	    	swap(no,m2.no);
	    	swap(name,m2.name);
	    	swap(qun,m2.qun);
	    	swap(tax,m2.tax);
	    	swap(discount,m2.discount);
	       }
		}
};
int main()
{
			string id,password;
	
			cout <<endl <<"- - - - - - - - - - - - - - - WELCOM TO POCKET MARKET - - - - - - - - - - - - - - - - -"<<endl<<endl;
			cout<<"------------ Please Enter User Id and Password----------------"<<endl<<endl;
			cout <<"Enter User ID\t: ";
			getline(cin,id);
			cout <<"Enter Password\t: ";
			getline(cin,password);
		    cout <<endl<<"....Created  your account successfully..!! "<<endl<<endl<<endl;
			cout <<endl<<"\t\t\t\t\t"<<system("pause");
			    system("cls");
			    cout <<endl<<".................you can login now................."<<endl<<endl;
		        string n,n1;
			    cout <<"Enetr user Id : ";
			    cin >>n;
			    cout <<"Enter password : ";
			    cin >>n1;
			 	cout <<endl<<"\t\t\t\t\t"<<system("pause");
			 	system("cls");
			    if(id == n && password == n1)
			    {
				   cout  <<endl<<"           ..your Login successfully...!!              "<<endl<<endl<<endl;
				 }
				 else
				  {
				  	cout <<"Please Enter Correct Id and Password...!!!"<<endl;
				 }
				 int I,i;
				 cout <<"Enter Number of Items : ";
				 cin >> I;
				 Market m[I];
				 Market m2;
				 for(i=0;i<I;i++)
				 {
				 	m[i].setdata();
				 }
				 m[I].header();
				 for (i=0; i<I ; i++)
                {
                    for(int j = i+1; j<I; j++)
                    {
                         m[i].settable(m[j]);
                    }
                }
				 for(i=0;i<I;i++)
				 {
				 	m[i].getdata();
				 }			
	
}
