#include<iostream>
using namespace std;
class admin
{
private:
public:
void getDetails()
{
cout <<"\t\t\t\t\t\t -: Welcome As Admin :- "<<endl;
}
};
class staff
{
private:
string name;
long long int number;
long long int phoneNumber;
string email;
int choice;
public:
void setData()
{
cout <<"\t\t\t\t--------------------------------------------------------"<<endl;
cout <<"\t\t\t\t\t\t -: Welcome As Staff :- "<<endl;
cout
<<"\t\t\t\t--------------------------------------------------------"<<endl<<endl<<endl;
cout <<"\t\t\t\tEnter The Name Of Staff\t\t\t: ";
getline(cin,name);
fflush(stdin);
cout <<"\t\t\t\tEnter The Account Number Of Staff\t: ";
cin >>number;
fflush(stdin);
cout <<"\t\t\t\tEnter The Phone Number Of Staff\t\t: ";
cin >>phoneNumber;
fflush(stdin);
cout <<"\t\t\t\tEnter The E-mail Of Staff\t\t: ";
getline(cin,email);
fflush(stdin);
cout <<endl<<endl;
cout <<"\t\t\t\t\t\t";system("pause");
system("cls");
}
void getData()
{
cout
<<"\t------------------------------------------------------------------------------------------------------------"<<endl;
cout <<"\tName\t\t\t\t: "<<name<<endl;
cout <<"\tAccount No\t\t\t: "<<number<<endl;
cout <<"\tPhone No\t\t\t: "<<phoneNumber<<endl;
cout <<"\tE-mail\t\t\t\t: "<<email<<endl;
cout
<<"\t------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
cout <<"\t\t\t\t\t Press [1] To Deposit The Money "<<endl<<endl;
cout <<"\t\t\t\t\t Press [2] To Transfer The Money "<<endl<<endl;
cout <<"\t\t\t\t\t Press [3] To Withdraw The Money "<<endl<<endl;
cout <<"\t\t\t\t\t Enter Your Choice: ";
cin >>choice;
cout <<endl<<endl;
cout <<"\t\t\t\t\t ";system("pause");
system("cls");
switch(choice)
{
case 1:
cout
<<"\t\t\t\t--------------------------------------------------------"<<endl;
cout <<"\t\t\t\t Deposit The Money : 10000 "<<endl;
cout
<<"\t\t\t\t--------------------------------------------------------"<<endl<<endl<<endl;
cout <<"\t\t\t\t Your Actual Amount is : 150000"<<endl;
cout <<"\t\t\t\t Congrates Your Amount Has Deposit uccessfully. "<<endl;
cout <<"\t\t\t\t Your Account Balance is : 160000"<<endl;
break;
case 2:
cout
<<"\t\t\t\t--------------------------------------------------------"<<endl;
cout <<"\t\t\t\t Transfer The Money : 10000 "<<endl;
cout
<<"\t\t\t\t--------------------------------------------------------"<<endl<<endl<<endl;
cout <<"\t\t\t\t Payee Account Number is :254611111"<<endl;
cout <<"\t\t\t\t Payee Name : Rajesh Tiwari"<<endl;
cout <<"\t\t\t\t Your Actual Amount is : 150000"<<endl;
cout <<"\t\t\t\t Congrates Your Amount Has Been Transfer Successfully. "<<endl;
cout <<"\t\t\t\t Your Account Balance is : 140000"<<endl;
break;
case 3:
cout
<<"\t\t\t\t--------------------------------------------------------"<<endl;
cout <<"\t\t\t\t Withdraw The Money : 15000 "<<endl;
cout<<"\t\t\t\t--------------------------------------------------------"<<endl<<endl<<endl;
cout <<"\t\t\t\t Your Actual Amount is : 150000"<<endl;
cout <<"\t\t\t\t Congrates Your Amount Has Withdraw Successfully. "<<endl;
cout <<"\t\t\t\t Your Account Balance is : 135000"<<endl;
break;
default:
cout <<"Please Read Option Carefully Than Enter Correct Option!!!"<<endl;
}
}
};
int main()
{
char choice;
cout <<endl<<endl<<endl;
cout <<"\t\t\t\t\t\t -: BANK MANGAEMENT SYSTEM :- "<<endl;

cout<<endl<<endl <<"\t\t\t\t\t\t";system("pause");
system("cls");
cout <<"\t\t\t\t----------------------------------------------------------"<<endl;
cout <<"\t\t\t\t -: Press A to log in as Admin or S to log in as Staff :- "<<endl;
cout <<"\t\t\t\t----------------------------------------------------------"<<endl<<endl<<endl;
cout <<"\t\t\t\t\t\t Enter Your Choice: ";
cin >>choice;
cout <<endl<<endl;
cout <<"\t\t\t\t\t\t";system("pause");
fflush(stdin);
system("cls");
switch(choice)
{
case 'A':
admin a;
a.getDetails();
break;
case 'S':
staff s;
s.setData();
s.getData();
break;
}
}
