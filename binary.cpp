#include<iostream>
using namespace std;
 
class high
{
  private :
  	int a,b;
  	public :
  		void setdata()
  		{
  			cout <<"Enter value A : ";
  			cin >>a;
  			cout <<"Enter value B : ";
  			cin >>b;
		}
	    void getdata()
	    {
	    	if(a<b)
          	{
	        	cout <<endl<<"\t"<<"B is big"<<endl;
	        }
        	else if(a>b)
	        {
		        cout <<endl<<"\t"<<"A is big"<<endl;
         	}
	   }
};
int main()
{
	high h1;
	h1.setdata();
    h1.getdata();
}

