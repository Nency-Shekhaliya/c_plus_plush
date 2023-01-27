#include<iostream>
using namespace std;
class Distance
{
	private:
		  float num;
	public:
			number(){}
		void setData(string a)
			{
			cout <<"Enter "<<a<<" : ";
			cin >>num;
			}
		Distance operator+(Distance& a)
			{
			Distance tmp;
			while(a.num>=12)
			{
			this->num++;
			a.num -=12;
			}
			tmp.num = this->num + a.num;
			cout <<endl<<endl<<""<<"Final Answer = "<<this->num<<" Feet"<<" & "<<a.num<<" inch"<<endl;
			return tmp;
			}
};
int main()
{
		Distance d1,d2,d3;
		d1.setData("Feet");
		d2.setData("Inch");
		d3 = d1 + d2;
}
