#include<iostream>
using namespace std;

class print
{
    private :
    	string name;
    public :
    	print()
    	{
		  cout <<"Enter Name :Nency";
		}
		print(string surname)
		{
		    cout<<name;
			cout <<surname;
		}
};
int main()
{

  print();
  print("shekhaliya");

}

