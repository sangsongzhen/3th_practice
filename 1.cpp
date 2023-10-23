#include<iostream>
using namespace std;

float add(int x, int y);	//声明和函数
float fac(int n);			//声明阶乘函数

void main1(void)
{
	int m = 0;
	int n = 0;
	cout << "请输入两个整数：";
	cin >> m >> n;
	cout << add(fac(m), fac(n)) << endl;
}

float add(int x, int y)
{
	int a = x + y;
	return a;
}

float fac(int n)
{
	int a = 1;

	for (int i = 1; i < n + 1; i++)
	{
		a *= i;
	}
	return a;
}