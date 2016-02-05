#include <iostream>
using namespace std;

class MyTime
{
	private:
		int hour;
		int minite;
		int second;
	public:
		void SetTime(int h,int m,int s)
		{
			hour = h;
			minite = m;
			second = s;
		};
		void print_12()
		{
			if(hour<12)
			{
				if(hour<10)cout << 0 << hour << ":";
				else cout << hour << ":";
			if(minite<10) cout << 0 << minite << ":";
			else cout << minite << ":";

			if(second<10) cout << 0 << second << " AM";
			else cout << second << " AM";
			}
			else
			{
				if(hour%12<10)cout << 0 << hour%12 << ":";
				else cout << hour%12 << ":";
				if(minite<10) cout << 0 << minite << ":";
			else cout << minite << ":";

			if(second<10) cout << 0 << second << " PM";
			else cout << second << " PM";
			}
			
		}
		void print_24()
		{
			if(hour<10)cout << 0 << hour << ":";
			else cout << hour << ":";

			if(minite<10) cout << 0 << minite << ":";
			else cout << minite << ":";

			if(second<10) cout << 0 << second;
			else cout << second;
		};
};

int main()
{
	int h,m,s;
	cin >> h >> m >> s;
	MyTime time1;
	time1.SetTime(h,m,s);
	time1.print_12();
	cout << endl;
	time1.print_24();
}
