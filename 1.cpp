#include<iostream>
using namespace std;

float add(int x, int y);	//�����ͺ���
float fac(int n);			//�����׳˺���

void main1(void)
{
	int m = 0;
	int n = 0;
	cout << "����������������";
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