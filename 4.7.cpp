// ���ַ�����str1�±�Ϊ˫�ŵ�Ԫ��ֵ������һ���ַ�����str2��ͬʱ���������
#include<iostream>
using namespace std;
#define N 15

int mainx()
{
	char str1[N] = {};
	cout << "�������ַ��� ��";
	for (int i = 0; i < N; i++)
	{
		cin >> str1[i];
	}


	char str2[N / 2] = {};

	int j = 0;
	for (int i = 0; i < N / 2; i++)
	{
		str2[i] = str1[j];
		j += 2;
	}

	for (int i = 0; i < N; i++)
	{
		cout << str1[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < N / 2; i++)
	{
		cout << str2[i] << "\t";
	}
	cout << endl;

	system("pause");
	return 0;
}