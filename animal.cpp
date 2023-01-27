#include<iostream>
using namespace std;

class animal
{
	protected :
		int age;
		string name ;
		public :
		void setvalue()
		{
		
			fflush(stdin);
			cout <<"Name : ";
			getline(cin,name);
			cout <<"Age : ";
			cin >>age;
		}
};
class Zebra : public animal
{
	private :
	public :
		void getdataZ()
		{
			string place;
			fflush(stdin);
			
			cout <<"Place : ";
			getline(cin,place);
			cout << endl << endl;
			cout <<endl<<"* *  OUT PUT * *"<<endl<<endl;
			cout <<"Animal Name\t: "<<name<<endl;
			cout <<name <<" age\t: "<<age<<endl;
			cout <<name <<" Place\t: "<<place<<endl<<endl; 
		}
};
class Dolphin : public animal
{
	private :
		string place2;
	public :
	void getdataD()
		{
			fflush(stdin);
			cout <<"Place : ";
			getline(cin,place2);
			cout << endl << endl;
			cout <<endl<<"* *  OUT PUT * *"<<endl<<endl;
			cout <<"Animal Name\t: "<<name<<endl;
			cout <<name<<" age\t: "<<age<<endl;
			cout <<name<<" Place\t: "<<place2<<endl; 
		}
};
int main ()
{
	Zebra Z;
	Dolphin D;
	Z.setvalue();
	Z.getdataZ();
	D.setvalue();
	D.getdataD();

}


