#include<iostream>
using namespace std;

class Motor
{
	protected:
	    string name;
	   	string msg ="This car is complete";
	public:
		Motor()
		{	
		    cout << "Enter Car Name\t: ";
			getline(cin,name);
			try
			{
				if(name=="OD")
				{
					throw msg;
				}
				else
				{
					cout<<"Enter Valid Brand...";
				}
			}
			catch(int n)
			{
				
			}
		}
};
class Garage : public Motor
{
	private:
	    string n;
	public:
		void toCatch()
		{
			
			try
			{ 
			    Motor m;
			}
			catch(string nN)
			{
				this->n=nN;
	  		}
	    } 
			Garage()
			{
				throw n;
			}		
};

int main()
{
	try
	{
		Garage Car;
		Car.toCatch();
	}
	catch(string n)
	{
		cout << n<<endl;
	}
	
}

