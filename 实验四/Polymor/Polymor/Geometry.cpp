#include<iostream>
#include<math.h>

#define PI 3.14

using namespace std;

class Shape
{
public:
	virtual void printArea();
	virtual void printPerimeter();
};

class Circle :public Shape
{
public:
	Circle(float radius) :r(radius) {}
	void printArea();
	void printPerimeter();
private:
	float r;
};

class Rectangle :public Shape
{
public:
	Rectangle(float length,float width):l(length),w(width) {}
	void printArea();
	void printPerimeter();
private:
	float l, w;
};

class Triangle :public Shape
{
public:
	Triangle(float A, float B, float C) :a(A), b(B), c(C) {}
	void printArea();
	void printPerimeter();
private:
	float a, b, c;
};

int main()
{
	Circle faiz(1);
	Rectangle kaixa(1,1);
	Triangle delta(1, 1, 1);
	Shape* ptr[3];
	ptr[0] = &faiz; ptr[0]->printArea(); ptr[0]->printPerimeter();
	ptr[1] = &kaixa; ptr[1]->printArea(); ptr[1]->printPerimeter();
	ptr[2] = &delta; ptr[2]->printArea(); ptr[2]->printPerimeter();
	return 0;
}

//�������麯���Ķ���
void Shape::printArea()
{
	cout << "...." << endl;
}

//�������麯���Ķ���
void Shape::printPerimeter()
{
	cout << "...." << endl;
}

//Բ�����
void Circle::printArea()
{
	float Area;
	Area = PI * r * r;
	cout << "THe area of this circle is:" << Area << endl;
}

//Բ���ܳ�
void Circle::printPerimeter()
{
	float P;
	P = PI * 2 * r;
	cout << "The perimeter of this circle is:" << P << endl;
}

//�������
void Rectangle::printArea()
{
	float Area;
	Area = l * w;
	cout << "The area of this Rectangle is:" << Area << endl;
}

//�����ܳ�
void Rectangle::printPerimeter()
{
	float P;
	P = 2 * (l + w);
	cout << "The perimeter of this Rectangle is:" << P << endl;
}

//���������
void Triangle::printArea()
{
	float Area,p;
	p = (a + b + c) / 2;
	Area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "The area of this Triangle is:" << Area << endl;
}

//�������ܳ�
void Triangle::printPerimeter()
{
	float P;
	P = a + b + c;
	cout << "The perimeter of this Triangle is:" << P << endl;
}
