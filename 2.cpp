//编写求出1~100中所有素数之和
//判断某个数n是否为素数用函数实现，题目给出函数原型
//1不是素数
#include<iostream>
using namespace std;

int isprime(int n);	//判断素数

void main2(void)
{
	int num = 2;
	for (int i = 3; i < 101; i++)		//从3开始判断
	{
		 num += isprime(i);
	}
	cout << num << endl;
}

int isprime(int n)
{
	int a = 0;
	int i = 2;
	for (; i < n; i++)
	{
		a = n % i;
		if (a == 0)
		{
			break;
		}
	}
	if (i == n)
	{
		return n;
	}
}