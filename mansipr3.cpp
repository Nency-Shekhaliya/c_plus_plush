#include<iostream>
using namespace std;

class Animal
{
    protected :
    	string name;
    	int age;
	public :  
	    void SetValue()
	    {
	    	fflush(stdin);
	    	cout << "Enter Name : ";
	    	getline(cin,name);
	    	cout << "Enter Age  : ";
	    	cin >> age;
		}
};

class Zebra : public Animal
{
	private :
		string place;
	public : 
	    void SetData()
	    {
			fflush(stdin);
			cout <<"Place : ";
			getline(cin,place);
			cout <<endl<<"* *  OUT PUT * *"<<endl<<endl;
			cout <<"Animal Name\t: "<<name<<endl;
			cout <<name <<" age\t: "<<age<<endl;
			cout <<name <<" Place\t: "<<place<<endl<<endl; 
		}
};

class Dolphin : public Animal
{
	private :
		string place;
	public : 
	void Setdata()
	    {
			fflush(stdin);
			cout <<"Place : ";
			getline(cin,place);
			cout <<endl<<"* *  OUT PUT * *"<<endl<<endl;
			cout <<"Animal Name\t: "<<name<<endl;
			cout <<name <<" age\t: "<<age<<endl;
			cout <<name <<" Place\t: "<<place<<endl<<endl; 
		}
};

int main()
{
	Zebra Z;
	Dolphin d;
	Z.SetValue();
	d.SetValue();
	d.Setdata();
	Z.SetData();
}

