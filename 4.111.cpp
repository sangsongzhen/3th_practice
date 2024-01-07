// 输入n个国家名 ，要求按字母先后顺序排列并输出
#include<iostream>
using namespace std;
#define N 5

int main()
{
	cout << "Input some names of countries :";
	string country[N] = {};

	for (int i = 0; i < N; i++)
	{
		cin >> country[i];
	}

	// 排序首字母
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N - 1; j++)
		{
			if (country[j + 1][0] < country[j][0])
			{
				string temp;
				temp = country[j];
				country[j] = country[j + 1];
				country[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << country[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}