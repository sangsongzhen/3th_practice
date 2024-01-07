// 编写函数判断回文串，是返回 1，否返回 0
#include<iostream>
using namespace std;

#define N 100

int f(char* s);

int mainx()
{
	cout << "请输入字符串 ：";
	char s[N];
	cin >> s;

	int flag = f(s);

	if (flag == 1)
	{
		cout << "是" << endl;
	}
	else
	{
		cout << "不是" << endl;
	}

	system("pause");
	return 0;
}

int f(char* s)
{
	// 记录字符串长度
	int ret = 0;
	for (int i = 0; i < N; i++)
	{
		if (s[i] == '\0')
		{
			ret = i;
			break;
		}
	}
	cout << ret << endl;	// 记录字符串长度

	// 判断
	int x = ret - 1;
	int flag = 0;
	for (int i = 0; i < ret / 2; i++)
	{
		if (s[i] != s[x])
		{
			break;
		}
		x--;
		flag++;
	}

	// 判断语句
	if (flag == ret/2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}