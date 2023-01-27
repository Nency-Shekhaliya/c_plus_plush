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
    cout << "Seconds: "; 
	 cin>>seconds;
}
void cal()
{
    seconds=seconds;
    minutes=minutes+ seconds/60;;
    hours= hours+ (minutes/60);
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
    Time T1;
   T1.input();
   T1.cal();
   T1.output();
    
}
