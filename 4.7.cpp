// 将字符数组str1下标为双号的元素值赋给另一个字符数组str2，同时输出两数组
#include<iostream>
using namespace std;
#define N 15

int mainx()
{
	char str1[N] = {};
	cout << "请输入字符串 ：";
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