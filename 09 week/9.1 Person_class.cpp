#include <iostream>
#include <string>
using namespace std;

class Person
{
	private:
		string name;
		int age;
		char sex;
	public:
		void Register(string na, int ag, char se)
		{
			name = na;
			age = ag;
			sex = se;
		}
		void ShowMe()
		{
			cout << name << " ";
			cout << age << " " ;
			cout << sex << endl;
		}
};


int main()
{
	string na;
	int ag;
	char se;
	cin >> na >> ag >> se;
	Person person1, person2;
	
	person1.Register(na,ag,se);
	person1.ShowMe();
	person2.Register("zhang3",19,'m');
	person2.ShowMe();
}