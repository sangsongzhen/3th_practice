//�Ӽ�������10��������������np�У����з���ͬ������np��ֻ�����һ�γ��ֵ���������Ķ����޳���
#include<iostream>
using namespace std;

void func(int *arr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[j] = 0;
			}
		}
	}
}

int mainx()
{
	cout << "������10��������";
	int np[10] = {};
	for (int i = 0; i < 10; i++)
	{
		cin >> np[i];
	}

	func(np);

	for (int i = 0; i < 10; i++)
	{
		if (np[i] != 0)
		{
			cout << np[i] << "\t";
		}
	}

	cout << endl;

	system("pause");
	return 0;
}