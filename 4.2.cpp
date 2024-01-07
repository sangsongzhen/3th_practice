//设数组a[N]中已有的数据(n个)已经从小到大排好了序，今输入一个
//数，要求按原来排序的规律将他插入数组中。写出算法处理
#include<iostream>
using namespace std;

void insert(int a ,int *arr)
{
	for (int i = 0; i < 5; i++)
	{
		if (a < arr[i])
		{
			for (int j = 4; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i] = a;
			break;
		}
		else
		{
			arr[4] = a;
		}
	}
}

int mainx()
{
	int arr[5] = { 11,33,55,77 };
	int a;		//定义要输入的数
	cout << "input a num :";
	cin >> a;

	insert(a ,arr);
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}