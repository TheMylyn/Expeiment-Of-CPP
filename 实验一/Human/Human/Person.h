#include<iostream>

using namespace std;

class Person {
public:
	//带参数
	 //Person(int nWeight,int nHeight,int nAge):m_nWeight(nWeight),m_nHeight(nHeight),m_nAge(nAge){}
	//带默认参数
	/*Person(int nWeight = 170, int nHeight = 65, int nAge = 20);*///:m_nWeight(nWeight),m_nHeight(nHeight), m_nAge(nAge) {}
	void ShowData();
	void InitData();
		//不带参数
	/*	Person();*/
	//void DeleteData();
	//使用析构函数
	/*~Person();*/
private:
	int m_nWeight;
	int m_nHeight;
	int m_nAge;
};