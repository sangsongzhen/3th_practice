// ����n�������� ��Ҫ����ĸ�Ⱥ�˳�����в����
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

	// ��������ĸ
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