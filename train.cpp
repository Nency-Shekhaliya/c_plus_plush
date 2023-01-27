#include<iostream>
using namespace std;
class bigbasket
{
private:
int number;
string name;
int quantity;
float tax;
float discount;
public:
void setData()
{
cout <<endl<<endl;
cout <<"Enter Item Number\t: ";
cin >>number;
fflush(stdin);
cout <<"Enter Item Name\t\t: ";
getline(cin,name);
fflush(stdin);
cout <<"Enter Item Quantity\t: ";
cin >>quantity;
fflush(stdin);
cout <<"Enter Item Tax\t\t: ";
cin >>tax;
fflush(stdin);
cout <<"Enter Item discount\t: ";
cin >>discount;
fflush(stdin);
}
static void header()
{
cout <<endl<<endl<<"Number\tItem Name\tItam Quantity\tItemTax\tItem Discount"<<endl<<endl;
}
void getData()
{
cout <<number<<"\t"<<name<<"\t"<<"\t"<<quantity<<"Pcs."<<"\t"<<"\t"<<tax<<" %"<<"\t"<<"\t"<<discount<<" Rs."<<endl;
}
void cmp(bigbasket &b2)
{
if(this->number > b2.number)
{
swap(number,b2.number);
swap(name,b2.name);
swap(quantity,b2.quantity);
swap(tax,b2.tax);
swap(discount,b2.discount);
}
}
};
int main()
{
string sUser,iUser,sPass,iPass;
int n;
int items;
cout <<"---Welcome to BigBasket Supermarket---"<<endl<<endl;
cout <<"Creat Your BigBasket Account!!!"<<endl;
cout <<"create Username\t: ";
cin >>sUser;
cout <<"Create Password\t: ";
cin >>sPass;
cout <<endl<<endl;
cout <<"Congratulations!!! Your BigBasket Account Created Successfully.You can LoginNow"<<endl<<endl;
cout <<"Your Username\t: "<<sUser<<endl;
cout <<"Your Password\t: "<<sPass<<endl;
cout <<endl<<endl<<"Please enter 1 to continue!!!"<<endl;
cin >>n;
system("cls");
tmp:
cout <<endl<<endl<<"---Login To BigBasket---"<<endl<<endl;
cout <<"Enter Username\t: ";
cin >>iUser;
cout <<"Enter Password\t: ";
cin >>iPass;
if(iUser == sUser && iPass == sPass)
{
cout <<endl<<endl<<"Login Successfully!!!"<<endl;
}
else
{
cout <<endl<<"You entered Wrong details***"<<endl;
goto tmp;
}
cout <<endl<<endl;
cout <<"Enter Total Number Of Items : ";
cin >>items;
bigbasket b[items];
for (int i = 0; i < items; i++)
{
b[i].setData();
}
for (int i = 0; i < items; i++)
{
for(int j = i+1; j<items; j++)
{
b[i].cmp(b[j]);
}
}
bigbasket ::header();
for (int i = 0; i < items; i++)
{
b[i].getData();
}
}

