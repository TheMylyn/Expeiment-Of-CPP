#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class CPerson//步骤一
{
protected:
	string Name;
	int Age;
	float Height;
	float Weight;
public:
	CPerson();//不带参数的构造函数
	void ShowInfo();
	void Measure();
};
class CTeacher;
class CStudent :public CPerson//步骤二
{
protected:
	int num;
	int Math_Grade;
	int CN_Grade;
	int Eng_Grade;
	int Geo_Grade;
	int Bio_Grade;
	int Che_Grade;
	int His_Grade;
	int Pol_Grade;
	int Phy_Grade;
	float Avrage_Grade;
public:
	CStudent();
	void ShowInfo();
	void Measure();
	void operator()();//步骤三求成绩均值
	void SetScore();
	friend class CTeacher;
};

class CTeacher : public CPerson//步骤四
{
public:
	CStudent classone[10];
	CTeacher(string n, int a, int h, int w);
	void ShowInfo();
	void Measure();
	void SetScore(CStudent& stu);
	void ReadInfo();
};


int main()
{
	CPerson LiSi; LiSi.ShowInfo(); LiSi.Measure();
	CStudent Xiaoming;
	string n; int a, h, w;
	cout << "Iuput Teacher's name,age,height,weight";
	cin >> n; cout << endl;
	cin >> a; cout << endl;
	cin >> h; cout << endl;
	cin >> w; cout << endl;
	CTeacher Zhang(n, a, h, w); Zhang.Measure();
	Zhang.SetScore(Xiaoming);
	Xiaoming.ShowInfo();
	Xiaoming.operator()();
	Zhang.ReadInfo();
}

void CTeacher::ReadInfo()
{
	ifstream ifs;
	ifs.open("C:\\Users\\刘坤泉\\Desktop\\Classone.txt",ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		ifs >> classone[i].Name >> classone[i].Age >> classone[i].Height >> classone[i].Weight >> classone[i].num >> classone[i].Math_Grade >> classone[i].CN_Grade >> classone[i].Eng_Grade >> classone[i].Geo_Grade >> classone[i].Bio_Grade >> classone[i].Che_Grade >> classone[i].His_Grade >> classone[i].Pol_Grade >> classone[i].Phy_Grade;
	}

	ifs.close();

	for (int i = 0; i < 10; i++)
	{
		classone[i].operator()();
	}
	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9-j; i++)
		{
			if (classone[i].Avrage_Grade < classone[i + 1].Avrage_Grade)
			{
				CStudent temp = classone[i];
				classone[i] = classone[i + 1];
				classone[i + 1] = temp;
			}
		}
	}
	ofstream outfile;
	outfile.open("C:\\Users\\刘坤泉\\Desktop\\Sort.txt", ios::out);
	outfile << "姓名 年龄 体重 学号 数学 语文 英语 地理 生物 化学 历史 政治 物理" << endl;
	for (int i = 0; i < 10; i++)
	{
		outfile << classone[i].Name <<" " << classone[i].Age << " " << classone[i].Height << " " << classone[i].Weight << " " << classone[i].num << " " << classone[i].Math_Grade << " " << classone[i].CN_Grade << " " << classone[i].Eng_Grade << " " << classone[i].Geo_Grade << " " << classone[i].Bio_Grade << " " << classone[i].Che_Grade << " " << classone[i].His_Grade << " " << classone[i].Pol_Grade << " " << classone[i].Phy_Grade << " " << endl;
	}
	outfile.close();

}


void CTeacher::Measure()
{
	float standard;
	standard = (Weight / (Height - 105)) * 10;
	if (standard >= 11)
	{
		cout << "肥胖" << endl;//过度肥胖
	}
	if (standard < 6)
	{
		cout << "严重营养不良" << endl;
	}
	if (standard >= 6 && standard < 8)
	{
		cout << "中度营养不良" << endl;
	}
	if (standard >= 8 && standard < 9)
	{
		cout << "轻度营养不良" << endl;
	}
	if (standard >= 9 && standard < 11)
	{
		cout << "正常范围" << endl;
	}
}

CTeacher::CTeacher(string n, int a, int h, int w)
{
	Name = n;
	Age = a;
	Height = h;
	Weight = w;
}

void CTeacher::ShowInfo()
{
	cout << "Name:" << Name << endl;
	cout << "Age:" << Age << endl;
	cout << "Height:" << Height << endl;
	cout << "Weight:" << endl;
}

void CTeacher::SetScore(CStudent& stu)
{
	stu.SetScore();
}


void CStudent::SetScore()
{
	cout << "Input Match Grade:"; cin >> Math_Grade; cout << endl;
	cout << "Input Chinese Grade:"; cin >> CN_Grade; cout << endl;
	cout << "Input English Grade:"; cin >> Eng_Grade; cout << endl;
	cout << "Input Physics Grade:"; cin >> Phy_Grade; cout << endl;
	cout << "Input Chemistry Grade:"; cin >> Che_Grade; cout << endl;
	cout << "Input Biology Grade:"; cin >> Bio_Grade; cout << endl;
	cout << "Input Political Grade:"; cin >> Pol_Grade; cout << endl;
	cout << "Input History Grade:"; cin >> His_Grade; cout << endl;
	cout << "Input Geography Grade:"; cin >> Geo_Grade; cout << endl;
}

CStudent::CStudent()
{
	Name = '0'; Age = 0; Height = 0; Weight = 0; num = 0;
	Math_Grade = 0; CN_Grade = 0; Eng_Grade = 0;
	Geo_Grade = 0; Bio_Grade = 0; Che_Grade = 0;
	His_Grade = 0; Pol_Grade = 0; Phy_Grade = 0;
}

void CStudent::ShowInfo()
{
	cout << "Name:" << Name << endl;
	cout << "Age:" << Age << endl;
	cout << "Height:" << Height << endl;
	cout << "Weight:" << endl;
	cout << "Number:" << num << endl;
	cout << "Math Grade:" << Math_Grade << endl;
	cout << "Chinese Grade:" << CN_Grade << endl;
	cout << "English Grade:" << Eng_Grade << endl;
	cout << "Geography Grade:" << Geo_Grade << endl;
	cout << "Biology Grade:" << Bio_Grade << endl;
	cout << "Chemistry Grade:" << Che_Grade << endl;
	cout << "History Grade" << His_Grade << endl;
	cout << "Political Grade:" << Pol_Grade << endl;
	cout << "Physics Grade:" << Phy_Grade << endl;
	cout << "展示学生成绩没问题" << endl;
}

void CStudent::Measure()
{
	float standard;
	standard = (Weight / (Height - 105)) * 10;
	if (standard >= 11)
	{
		cout << "肥胖" << endl;//过度肥胖
	}
	if (standard < 6)
	{
		cout << "严重营养不良" << endl;
	}
	if (standard >= 6 && standard < 8)
	{
		cout << "中度营养不良" << endl;
	}
	if (standard >= 8 && standard < 9)
	{
		cout << "轻度营养不良" << endl;
	}
	if (standard >= 9 && standard < 11)
	{
		cout << "正常范围" << endl;
	}
}

void CStudent::operator()()
{
	float avr;
	avr = (float)(Math_Grade + CN_Grade + Eng_Grade + Phy_Grade + Che_Grade + Bio_Grade + Pol_Grade + His_Grade + Geo_Grade) / 9;
	cout << "The avrage grade of " <<Name<<":" << avr << endl;
	Avrage_Grade = avr;
}

CPerson::CPerson()
{
	Name = "李四";
	Age = 40;
	Height = 180;
	Weight = 90;
}

void CPerson::ShowInfo()//显示该类的各个数据成员
{
	cout << "Name:" << Name << endl;
	cout << "Age:" << Age << endl;
	cout << "Height:" << Height << endl;
	cout << "Weight:" <<Weight<< endl;
}

void CPerson::Measure()//判断体重情况
{
	float standard;
	standard = (Weight / (Height - 105)) * 10;
	if (standard >= 11)
	{
		cout << "肥胖" << endl;//过度肥胖
	}
	if (standard < 6)
	{
		cout << "严重营养不良" << endl;
	}
	if (standard >= 6 && standard < 8)
	{
		cout << "中度营养不良" << endl;
	}
	if (standard >= 8 && standard < 9)
	{
		cout << "轻度营养不良" << endl;
	}
	if (standard >= 9 && standard < 11)
	{
		cout << "正常范围" << endl;
	}
}





/*int i = 0;
while (ifs >> classone[i].Name >> classone[i].Age >> classone[i].Height >> classone[i].Weight >> classone[i].num >> classone[i].Math_Grade >> classone[i].CN_Grade >> classone[i].Eng_Grade >> classone[i].Geo_Grade >> classone[i].Bio_Grade >> classone[i].Che_Grade >> classone[i].His_Grade >> classone[i].Pol_Grade >> classone[i].Phy_Grade)
{
	i++;
}*/