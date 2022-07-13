#include"Person.h"

int main()
{
	//无参数直接执行就可以
	//带参数
	/*Person Xiaoming(140,175,18);*/
	Person Xiaoming;
	//Xiaoming.DeleteData();
	Xiaoming.InitData();
	Xiaoming.ShowData();
	
	//步骤八
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