#include<iostream>

using namespace std;

class Person {
public:
	//������
	 //Person(int nWeight,int nHeight,int nAge):m_nWeight(nWeight),m_nHeight(nHeight),m_nAge(nAge){}
	//��Ĭ�ϲ���
	/*Person(int nWeight = 170, int nHeight = 65, int nAge = 20);*///:m_nWeight(nWeight),m_nHeight(nHeight), m_nAge(nAge) {}
	void ShowData();
	void InitData();
		//��������
	/*	Person();*/
	//void DeleteData();
	//ʹ����������
	/*~Person();*/
private:
	int m_nWeight;
	int m_nHeight;
	int m_nAge;
};