#include<iostream>

using namespace std;

//CPerson��Ĵ���
class CPerson {
public:
	//ԭ���캯��
	CPerson();
	//step6 �������Ĺ��캯��
	/*CPerson(int Weight, int Height, int Age) :m_nWeight(Weight), m_nHeight(Height), m_nAge(Age) {}*/
	~CPerson();

	void ShowInfo();

	int m_nWeight;
	int m_nHeight;
	int m_nAge;
};

//Step2 �½�CStudent
class CStudent :public CPerson
{
public:
	//ԭ���캯��
	 CStudent();
	//step6 �������Ĺ��캯��
	/*CStudent(int Weight, int Height, int Age, int nID, float fScr) :CPerson(Weight, Height, Age), m_nID(nID), m_nfScore(fScr) {}*/

	int m_nID;
	float m_nfScore;
	void ShowInfo();

	//step4��step5����
	/*void GetInfo(CStudent &g1);*/
};

//��CPerson��ʵ��
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


//Step3 ��CStudent����дShowInfo����
void CStudent::ShowInfo()
{
	cout << "His weight is:" << m_nWeight << endl;
	cout << "His height is:" << m_nHeight << endl;
	cout << "His age is:" << m_nAge << endl;
	cout << "His ID is:" << m_nID << endl;
	cout << "His final score is :" << m_nfScore << endl;
}

//step4&step5���� ������ĺ������ڷ��ʻ��������ݳ�Ա
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
	//ԭ����
	CPerson Xiaoming;
	Xiaoming.ShowInfo();
	cout << endl << endl << endl;
	
	//step5�Ĺ��캯��
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

	//step4&step5���� ��������
	/*Xiaogang.GetInfo(Xiaogang);

	cout << "Please input his ID:";
	cin >> Xiaogang.m_nID;
	
	cout << "Please input his score:";
	cin >> Xiaogang.m_nfScore;*/

	Xiaogang.ShowInfo();

	return 0;
}