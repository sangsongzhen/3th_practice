//递归和非递归两种方法
//求s = 1 + 2 + 3 + ...+ n
//函数原型：float sum(int n) , 限定N >= 1
#include<iostream>
using namespace std;

float sum(int n);	//函数声明
float sum1(int n);	//函数声明

void main4()
{
	float n;
	cout << "请输入一个大于一的整数：";
	cin >> n;
	cout << sum1(n) << endl;

}

float sum(int n)	//非递归
{
	float sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

float sum1(int n)	//递归
{
	float sum;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		sum = n + sum1(n - 1);
	}
	return sum;
}
