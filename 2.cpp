//��д���1~100����������֮��
//�ж�ĳ����n�Ƿ�Ϊ�����ú���ʵ�֣���Ŀ��������ԭ��
//1��������
#include<iostream>
using namespace std;

int isprime(int n);	//�ж�����

void main2(void)
{
	int num = 2;
	for (int i = 3; i < 101; i++)		//��3��ʼ�ж�
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