//���ַ������ݹ�ͷǵݹ飩
//��a��n���ݺ���
#include<iostream>
using namespace std;

float pow(float a, int n);
float pow1(float a, int n);

void main(void)
{
	float a, b;
	cout << "��������������";
	cin >> a >> b;
	cout << pow1(a, b);
}

float pow(float a, int n)  //�ǵݹ�
{
	float num = 1;
	for (int i = n; i > 0; i--)
	{
		num *= a;
	}
	return num;
}

float pow1(float a, int n)	//�ݹ�
{
	float num = 0;
	if (n == 1)
	{
		return a;
	}
	num =  a * pow1(a, n - 1);
	return num;
}