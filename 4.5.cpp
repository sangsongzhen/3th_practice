//  ������a[]�е�Ԫ��������
#include<iostream>
using namespace std;

constexpr auto N = 1000;

void f(int* a ,int n);	// ��������

int mainx()
{
	cout << "������Ҫ¼������ݸ��� ��";
	int n = 0;
	cin >> n;

	cout << "������Ҫ¼����� ��";
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

	for (int i = 0; i < (n / 2) + 1; i++)	// ��������
	{
		int temp = a[i];
		a[i] = a[y];
		a[y] = temp;
		y--;
	}
}