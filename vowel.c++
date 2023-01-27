#include<iostream>
using namespace std;

int main()
{
  char n;
  cout << "Enter the character : ";
  cin >> n;
   
     if(n=='a' ||n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I'  || n=='O' || n=='U')
     {
       cout << "character is vowel";
     }
     else 
     {
         cout << "character is consonant";
     }
}

