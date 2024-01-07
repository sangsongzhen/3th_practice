//  将数组a[]中的元素逆序存放
#include<iostream>
using namespace std;

constexpr auto N = 1000;

void f(int* a ,int n);	// 函数声明

int mainx()
{
	cout << "请输入要录入的数据个数 ：";
	int n = 0;
	cin >> n;

	cout << "请输入要录入的数 ：";
	int a[N] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	f(&a[0] ,n);

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}

	system("pause");
	return 0;
}

void f(int* a ,int n)
{
	int x = 0;
	int y = n - 1;

	for (int i = 0; i < (n / 2) + 1; i++)	// 交换次数
	{
		int temp = a[i];
		a[i] = a[y];
		a[y] = temp;
		y--;
	}
}