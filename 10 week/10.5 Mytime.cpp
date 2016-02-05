#include <iostream>
#include <iostream>
using namespace std;

class Mytime
{
	int hour,minite,second;


public:
	Mytime():hour(0),minite(0),second(0){}
	Mytime(int h, int m, int s)
	{
		if(h>=0 && h<=23) hour = h;
		else return;
		if(m>=0 && m<60) minite = m;
		else
		{
			hour=0;
			return;
		}
		if(s>=0 && s<60) second = s;
		else
		{
			hour = 0;
			minite = 0;
			return;
		}
	}
	void Settime(int h, int m, int s)
	{
		if(h>=0 && h<=23) hour = h;
		else return;
		if(m>=0 && m<60) minite = m;
		else
		{
			hour=0;
			return;
		}
		if(s>=0 && s<60) second = s;
		else
		{
			hour = 0;
			minite = 0;
			return;
		}
	}
	void plus(int h,int m, int s)
	{
		second = second + s;
		if(second>=60)
		{
			minite++;
			second = second-60;
		}
		minite = minite + m;
		if(minite>=60)
		{
			hour++;
			minite = minite - 60;			
		}
		hour = hour + h;
		if(hour>=24)
		{
			hour = hour - 24;
		}

	}
	void minus(int h,int m, int s)
	{
		second = second - s;
		if(second<0)
		{
			minite--;
			second = 60 + second;
		}
		minite = minite - m;
		if(minite<0)
		{
			hour--;
			minite = 60 + minite;
		}
		hour = hour - h;
		if(hour<0)
		{
			hour = hour + 24;
		}
	}
	void ShowTime(int d=12)
	{
		if(d==24)
		{
			if(hour<10)
				cout << 0 << hour << ":";
			else
				cout << hour << ":";
			if(minite<10)
				cout << 0 << minite << ":";
			else
				cout << minite << ":";
			if(second<10)
				cout << 0 << second << endl;
			else
				cout << second << endl;

		}
		else
		{

			if(hour<12)
			{
				if(hour<10)
					cout << 0 << hour << ":";
				else
					cout << hour << ":";
				if(minite<10)
					cout << 0 << minite << ":";
				else
					cout << minite << ":";
				if(second<10)
					cout << 0 << second <<" AM" << endl;
				else
					cout << second <<" AM" << endl;

			}
			else
			{
				hour = hour - 12;
				if(hour<10)
					cout << 0 << hour << ":";
				else
					cout << hour << ":";
				if(minite<10)
					cout << 0 << minite << ":";
				else
					cout << minite << ":";
				if(second<10)
					cout << 0 << second <<" PM" << endl;
				else
					cout << second <<" PM" << endl;
				hour = hour + 12;

			}
		}
	}

};
int main()
{	
	Mytime t1;
	Mytime t2(8,10,30);
	t1.ShowTime();
	t1.ShowTime(24);
	t2.ShowTime();
	t2.ShowTime(24);
	int h1,m1,s1;
	int h2,m2,s2;
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;
	t1.Settime(h1,m1,s1);
	t1.plus(h2,m2,s2);
	t1.ShowTime();
	t1.ShowTime(24);
	t2.minus(h2,m2,s2);
	t2.ShowTime();
	t2.ShowTime(24);
	return 0;
}
