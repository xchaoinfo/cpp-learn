# include <iostream>
# include <string>
using namespace std;

class Dog
{
	string name;
	int age;
	char sex;
	float weight;

public:
	Dog(string n,int a, char s,float w)
	{
		name = n;
		age = a;
		sex = s;
		weight = w;
	}
	void GetName()
	{
		cout << name << endl;
	}
	void GetAge()
	{
		cout << age << endl;
	}
	void GetSex()
	{
		cout << sex << endl;
	}
	void GetWeight()
	{
		cout << weight << endl;
	}
	void speak()
	{
		cout << "Arf!Arf!";
	}
};



int main()
{
	string n;
	int a;
	char s;
	float w;
	cin >> n >> a >> s >> w;
	Dog d(n,a,s,w);
	d.GetName();
	d.GetAge();
	d.GetSex();
	d.GetWeight();
	d.speak();

}
