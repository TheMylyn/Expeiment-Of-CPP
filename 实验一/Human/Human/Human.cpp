#include"Person.h"

int main()
{
	//�޲���ֱ��ִ�оͿ���
	//������
	/*Person Xiaoming(140,175,18);*/
	Person Xiaoming;
	//Xiaoming.DeleteData();
	Xiaoming.InitData();
	Xiaoming.ShowData();
	
	//�����
	new Person;
	Person* pt;
	pt = new Person;
	pt->InitData();
	pt->ShowData();
	delete pt;
	cout << endl << endl << endl;
	/*system("pause");*/

	return 0;
}