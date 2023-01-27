#include<iostream>
using namespace std;

class House
{
    private:
	 int floor,rooms,TV,AC;
	 char color[100];
	public :
	
	void input ()
	{
		cout << "Enter floor : ";
		cin >> floor;
		cout << "Enter rooms : ";
		cin >> rooms;
		cout << "Enter TV : ";
		cin >> TV;
		cout << "Enter AC : ";
		cin >> AC;
		cout << "Enter color : ";
		cin >> color;
	}
	void output()
	{
	    cout <<"----------OUTPUT---------"<<endl;
		cout <<"floor : "<<floor <<endl;
		cout <<"rooms : "<<rooms <<endl;
		cout <<"TV    : "<<TV <<endl;
		cout <<"AC    : "<<AC <<endl;
		cout <<"color: "<<color <<endl;
		}	
};
int main()
{
	House h1;
	h1.input();
	h1.output();
}

