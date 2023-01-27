#include<iostream>
using namespace std;

class Division
{
	private :
	    int a,b;
	
	public:
    void SetValue()
    {
    	cout <<"------------Division------------"<<endl;
        cout << "Enter A : ";
	    cin >> a;
        cout << "Enter B : ";
	    cin >> b;
	try
	{
		if(b==0)
		{
			throw 1;
		}
		else
		{
			cout << "Division : " << a/b<<endl<<endl<<endl;
		}
	}
	
	catch(int n)
	{
		cout <<"Can't Divide by Zero"<<endl<<endl<<endl;
	}
    }
};

class Age
{
	private:
		int age;
		string vote = "You cann't vote";
	public :
		void Setage()
		{
			cout <<"------------Age------------"<<endl;
			cout << "Enter age : ";
			cin  >> age;
		try
		{
			if(age<=18)
			{
				throw vote;
			}
			else
			{
				cout << "You can vote"<<endl<<endl<<endl;
			}
		}
		catch(string c)
		{
			cout << "You can't vote"<<endl<<endl<<endl;
		}
	    }
};

class Password
{
	private:
		char pass[100];
		string password = "Password Is Incorrect";
	public :
		void Setpass()
		{
			cout <<"------------Password------------"<<endl;
			cout << "Enter Password : ";
			cin  >> pass;
		try
		{
			if(pass[100]<='A' && pass[100]>='Z')
			{
				throw password;
			}
            else
			{
				cout << "Password Is Correct"<<endl<<endl<<endl;
			}
		}
		catch(string i)
		{
			cout << "Password Is Incorrect"<<endl<<endl<<endl;
		}
	    }
};

int main()
{
	Division d;
	d.SetValue();
	
	Age a;
	a.Setage();
	
	Password p;
	p.Setpass();
}



