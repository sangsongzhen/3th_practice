//两种方法（递归和非递归）
//求a的n次幂函数
#include<iostream>
using namespace std;

float pow(float a, int n);
float pow1(float a, int n);

void main(void)
{
	float a, b;
	cout << "请输入两个数：";
	cin >> a >> b;
	cout << pow1(a, b);
}

float pow(float a, int n)  //非递归
{
	float num = 1;
	for (int i = n; i > 0; i--)
	{
		num *= a;
	}
	return num;
}

float pow1(float a, int n)	//递归
{
	float num = 0;
	if (n == 1)
	{
		return a;
	}
	num =  a * pow1(a, n - 1);
	return num;
}