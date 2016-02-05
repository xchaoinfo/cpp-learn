
#include <iostream>
using namespace std;

class Weekday
{
	private:
		int day;

	public:
		void SetDay(int d)
		{
			day = d;
		}
		void IncDay()
		{
			if(day==6) day = 0;
			else day = day + 1;
		}
		void Nowday()
		{
			switch(day)
	 	{
				case 1: cout << "星期一" << endl; break;
				case 2: cout << "星期二" << endl; break;
				case 3: cout << "星期三" << endl; break;
				case 4: cout << "星期四" << endl; break;
				case 5: cout << "星期五" << endl; break;
				case 6: cout << "星期六" << endl; break;
				case 0: cout << "星期日" << endl; break;
			}
		}
};
int main()
{
	int d, n=3;
	cin >> d;
	Weekday week;
	week.SetDay(d);
	week.Nowday();
	for(int i=0; i<n-1; i++)
	{
		week.IncDay();
		week.Nowday();
	}
	
}
