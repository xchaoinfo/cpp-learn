# include <iostream>
# include <string>
using namespace std;

class Person
{
	string name;
	int age;
	char sex;
public:
	Person():name("XXX"),age(0),sex('m'){}
	~Person()
	{
		cout << "Now destroying the instance of Person\n";
	}
	void Register(string n,int a,char s)
	{
		name = n;
		age = a;
		sex = s;		
	}
	void Showme()
	{
		cout << name << " " << age << " " << sex << endl;
	}
};
int main()
{
	Person *p1 = new Person(),*p2 = new Person();
	string n;
	int a;
	char s;
	cin >> n >> a >> s;
	cout << "person1:";
	p1->Showme();
	cout << "person2:";
	p2->Showme();
	p1->Register(n,a,s);
	p2->Register(n,a,s);
	cout << "person1:";
	p1->Showme();
	cout << "person2:";
	p2->Showme();
	delete p1;
	delete p2;



}
