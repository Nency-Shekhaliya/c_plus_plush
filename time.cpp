#include <iostream>
using namespace std;
 
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
 
void input()
{
    cout << "Hours: ";  
	  cin>>hours;
    cout << "Minutes: "; 
	 cin>>minutes;
    cout << "Seconds: "; 
	 cin>>seconds;
}
void cal(Time T1,Time T2)
{
    seconds=T1.seconds+T2.seconds;
    minutes=T1.minutes+T2.minutes + seconds/60;;
    hours= T1.hours+T2.hours + (minutes/60);
   minutes %=60;
   seconds %=60;
}
 
void output()
{
  
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
};
 
int main()
{
    Time T1,T2,T3;
   T1.input();
   T2.input();
   T3.cal(T1,T2);
   T3.output();
    
}
