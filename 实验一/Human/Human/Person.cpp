#include"Person.h"

void Person::ShowData()
{
	cout << "m_nWeight =" << m_nWeight << endl;
	cout << "m_nHeight =" << m_nHeight << endl;
	cout << "m_nAge =" << m_nAge << endl;
}
////�����������캯��
//Person::Person()
//{
//	cin >> m_nWeight;
//	cin >> m_nHeight;
//	cin >> m_nAge;
//}

void Person::InitData()
{
	cin >> m_nWeight;
	cin >> m_nHeight;
	cin >> m_nAge;
}



//����Ĭ�ϲ���,��Ҫ������ĸ�ֵ����
//�������Ĳ���Ҫ����ĸ�ֵ������������ʱ��Ϳ��Ը�ֵ
//Person::Person(int nWeight, int nHeight, int nAge)
//{
//	m_nWeight = nWeight;
//	m_nHeight = nHeight;
//	m_nAge = nAge;
//}

//void Person::DeleteData()
//{
//	m_nWeight = 0;
//	m_nHeight = 0;
//	m_nAge = 0;
//}


////������������
//Person::~Person()
//{
//	cout << "������ɾ��" << endl;
//	m_nWeight = 0;
//	m_nHeight = 0;
//	m_nAge = 0;
//	cout << "m_nWeight =" << m_nWeight << endl;
//	cout << "m_nHeight =" << m_nHeight << endl;
//	cout << "m_nAge =" << m_nAge << endl;
//}