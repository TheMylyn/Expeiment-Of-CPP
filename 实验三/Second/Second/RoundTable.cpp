#include<iostream>

using namespace std;

class Table
{
public:
	Table(float L);
protected:
	float Legs;
};

class Circle
{
public:
	Circle(float R);
protected:
	float Radius;
};

class RoundTable :public Table, public Circle
{
public:
	RoundTable(float L, float R) :Table(L), Circle(R) {}
	void ShowInfo();
};

int main()
{
	RoundTable t1(2.33, 3.14);
	t1.ShowInfo();
	return 0;
}

Table::Table(float L)
{
	Legs = L;
}

Circle::Circle(float R)
{
	Radius = R;
}

void RoundTable::ShowInfo()
{
	cout << "The length of the RoundTable's Leg:" << Legs << endl;
	cout << "The Radius of the RoundTable's Leg:" << Radius << endl;
}