//从键盘输入10个整数存入数组中，然后从大到小次序输出。
#include<iostream>
using namespace std;

void bubbleSort(int* arr ,int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			int temp = 0;
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int mainx()
{
	int arr[10] = {};
	int num;
	cout << "input 10 num :";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << arr[i] << "\t";
	//}

	num = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr ,num);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}