#include<iostream>
using namespace std;

class print
{
    private :
    	string name="Nency";
    public :
    	print()
    	{
		  cout <<"\n"<<name;
		}
		print(string surname)
		{
			cout <<" "<<surname;
		}
};
int main()
{
  print();
  print();
  print("shekhaliya");

}
