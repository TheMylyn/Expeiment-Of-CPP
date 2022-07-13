#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int* pData = NULL;
	int* pData2 = NULL;
	int n = 400;
	pData = new int[n / sizeof(int)];
	pData2 = new int[n / sizeof(int)];
	
	for (int i = 0; i < n / (sizeof(int)); i++)
	{
		*(pData + i) = 0;
	}
	
	for (int i = 0; i < n / (sizeof(int)); i++)
	{
		*(pData + i) = i * i;
		cout << *(pData + i) << endl;
	}

	//д��Data.txt

	ofstream outfile("C:\\Users\\����Ȫ\\Desktop\\Data.txt", ios::out);

	if (!outfile)
	{
		cerr << "failed" << endl;
		return 0;
	}

	for (int i = 0, j = 0; i < n / (sizeof(int)); i++, j++)
	{
		outfile << *(pData + i) << " ";
		if (j == 9)
		{
			outfile << endl;
			j = -1;
		}
	}

	//������д��Binary.txt
	ofstream outBinary("C:\\Users\\����Ȫ\\Desktop\\Binary.txt", ios::out|ios::binary);
	
	if (!outBinary)
	{
		cerr << "can't output in Binary";
		return 0;
	}

	for (int i = 0; i < n / (sizeof(int)); i++)
	{
		outBinary.write((char*)(pData+i),sizeof(int));
	}

	outBinary.close();


	//�����ƶ�������ӡ
	ifstream inBinary("C:\\Users\\����Ȫ\\Desktop\\Binary.txt", ios::in | ios::binary);
	
	if (!inBinary)
	{
		cerr << "can't input in Binary";
		abort();
	}

	for (int i = 0; i < n / (sizeof(int)); i++)
	{
		inBinary.read((char*)(pData2+i),sizeof(int));
	}

	for (int i = 0; i < n / (sizeof(int)); i++)
	{
		cout << *(pData2 + i) << " ";
	}

	inBinary.close();

	return 0;
}