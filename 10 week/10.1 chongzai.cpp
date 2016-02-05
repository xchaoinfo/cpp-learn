# include <iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date():year(1900),month(1),day(1){};

	Date(int yy,int mm, int dd)
	{
		if(yy>=1900 && yy<=9999)year = yy;
		else return;
		if(mm>=1 && mm<31) month = mm;
		else
		{
			year = 1900;
			return;
		}
		if(dd>=1 && dd<=31)day = dd;
		else
		{ 
			year = 1900;
			month = 1;
			return;
		}
	}

	
	void init(int yy,int mm,int dd)
	{
		if(yy>=1900 && yy<=9999)year = yy;
		else return;
		if(mm>=1 && mm<31) month = mm;
		else
		{
			year = 1900;
			return;
		}
		if(dd>=1 && dd<=31)day = dd;
		else
		{ 
			year = 1900;
			month = 1;
			return;
		}
	}
	void print_date()
	{
		cout << year << '-' << month << '-' << day << endl;
	}

};
int main()
{
	int yy,mm,dd;
	cin >> yy >> mm >> dd;
	Date d1;
	d1.print_date();
	Date d2(2100,12,12);
	d2.print_date();
	d1.init(yy,mm,dd);
	d1.print_date();

	return 0;
}
