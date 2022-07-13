#include<iostream>

using namespace std;

//CPerson类的创建
class CPerson {
public:
	//原构造函数
	CPerson();
	//step6 带参数的构造函数
	/*CPerson(int Weight, int Height, int Age) :m_nWeight(Weight), m_nHeight(Height), m_nAge(Age) {}*/
	~CPerson();

	void ShowInfo();

	int m_nWeight;
	int m_nHeight;
	int m_nAge;
};

//Step2 新建CStudent
class CStudent :public CPerson
{
public:
	//原构造函数
	 CStudent();
	//step6 带参数的构造函数
	/*CStudent(int Weight, int Height, int Age, int nID, float fScr) :CPerson(Weight, Height, Age), m_nID(nID), m_nfScore(fScr) {}*/

	int m_nID;
	float m_nfScore;
	void ShowInfo();

	//step4和step5公用
	/*void GetInfo(CStudent &g1);*/
};

//类CPerson的实现
CPerson::CPerson()
{
	m_nWeight = 0;
	m_nHeight = 0;
	m_nAge = 0;
}

CPerson::~CPerson()
{

}

void CPerson::ShowInfo()
{
	cout << "His weight is:" << m_nWeight << endl;
	cout << "His height is:" << m_nHeight << endl;
	cout << "His age is:" << m_nAge << endl;
}


//Step3 在CStudent类重写ShowInfo函数
void CStudent::ShowInfo()
{
	cout << "His weight is:" << m_nWeight << endl;
	cout << "His height is:" << m_nHeight << endl;
	cout << "His age is:" << m_nAge << endl;
	cout << "His ID is:" << m_nID << endl;
	cout << "His final score is :" << m_nfScore << endl;
}

//step4&step5共用 新增添的函数用于访问基类中数据成员
//void CStudent::GetInfo(CStudent& g1)
//{
//	cout << "Please input his weight:";
//	cin >> g1.m_nWeight;
//
//	cout << "Please input his height:";
//	cin >> g1.m_nHeight;
//
//	cout << "Please input his age:";
//	cin >> g1.m_nAge;
//}

int main()
{
	//原代码
	CPerson Xiaoming;
	Xiaoming.ShowInfo();
	cout << endl << endl << endl;
	
	//step5的构造函数
	/*CPerson Xiaoming(0, 0, 0);
	CStudent Xiaogang(1,1,1,1,1);
	Xiaoming.ShowInfo();*/


	CStudent Xiaogang;
	cout << "Please input his weight:";
	cin >> Xiaogang.m_nWeight;

	cout << "Please input his height:";
	cin >> Xiaogang.m_nHeight;

	cout << "Please input his age:";
	cin >> Xiaogang.m_nAge;

	//step4&step5共用 输入数据
	/*Xiaogang.GetInfo(Xiaogang);

	cout << "Please input his ID:";
	cin >> Xiaogang.m_nID;
	
	cout << "Please input his score:";
	cin >> Xiaogang.m_nfScore;*/

	Xiaogang.ShowInfo();

	return 0;
}