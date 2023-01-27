#include<iostream>
 using namespace std;
class Demo
{
		 int x;
		 string member; 
		 public:
		
		void setData(int a)
		 {
		x=a; 
		}
		int getData() const
		{
		 ++ x;
		member;
		return x;
		} 
};
int main() 
{
		Demo d;
		d.setData(10); 
		cout<<endl<<d.getData();
		return 0;
}

