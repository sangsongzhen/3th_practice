//�ݹ�ͷǵݹ����ַ���
//��s = 1 + 2 + 3 + ...+ n
//����ԭ�ͣ�float sum(int n) , �޶�N >= 1
#include<iostream>
using namespace std;

float sum(int n);	//��������
float sum1(int n);	//��������

void main4()
{
	float n;
	cout << "������һ������һ��������";
	cin >> n;
	cout << sum1(n) << endl;

}

float sum(int n)	//�ǵݹ�
{
	float sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

float sum1(int n)	//�ݹ�
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
