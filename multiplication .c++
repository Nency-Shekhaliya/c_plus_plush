#include<iostream>
using namespace std;

inline int mul( int n)

 {
    cout << n <<" "<<  1 <<" "<< n*1 <<endl;
 	cout << n <<" "<<  2 <<" "<< n*2 <<endl;
 	cout << n <<" "<<  3 <<" "<<  n*3 <<endl;
    cout << n <<" "<<  4 <<" "<<  n*4 <<endl;
    cout << n <<" "<<  5 <<" "<<  n*5<<endl;
 	cout << n <<" "<<  6 <<" "<<  n*6 <<endl;
 	cout << n <<" "<<  7 <<" "<<  n*7 <<endl;
    cout << n <<" "<<  8 <<" "<<  n*8 <<endl;
	cout << n <<" "<<  9 <<" "<< n*9 <<endl;
	cout << n <<" "<<  10 <<" "<<  n*10 <<endl;
}
 int main()
 {
 	int n,n1;
 	cout << " N: ";
 	cin >> n;
 	mul(n);
 }
