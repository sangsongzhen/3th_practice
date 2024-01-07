//从键盘输入10个整数存入数组np中，其中凡相同的数在np中只存入第一次出现的数，其余的都被剔除。
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
	cout << "请输入10个整数：";
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