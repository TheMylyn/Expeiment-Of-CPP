#include"Person.h"

void Person::ShowData()
{
	cout << "m_nWeight =" << m_nWeight << endl;
	cout << "m_nHeight =" << m_nHeight << endl;
	cout << "m_nAge =" << m_nAge << endl;
}
////不带参数构造函数
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



//带有默认参数,需要做额外的赋值操作
//带参数的不需要额外的赋值操作，声明的时候就可以赋值
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


////运用析构函数
//Person::~Person()
//{
//	cout << "数据已删除" << endl;
//	m_nWeight = 0;
//	m_nHeight = 0;
//	m_nAge = 0;
//	cout << "m_nWeight =" << m_nWeight << endl;
//	cout << "m_nHeight =" << m_nHeight << endl;
//	cout << "m_nAge =" << m_nAge << endl;
//}