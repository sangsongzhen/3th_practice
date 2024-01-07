// 读入若干行字符行，以空行（只键入回车符的行）结束，输出其中最长的行。
#include<iostream>
using namespace std;
#define N 9

int main10()
{
	cout << "Input strings :";
	string str[N] = {};

	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}

	// 统计各字符串长度
	int cnt[N] = {};
	for (int i = 0; i < N; i++)
	{
		cnt[i] = str[i].length();
	}

	// 找出最长字符串下标
	int flag = 0;
	for (int i = 0; i < 8; i++)
	{
		if (cnt[i + 1] > cnt[i])
		{
			cnt[i] = cnt[i + 1];
		}
		else
		{
			cnt[i + 1] = cnt[i];
		}
	}

	cout << str[flag] << endl;


	system("pause");
	return 0;
}