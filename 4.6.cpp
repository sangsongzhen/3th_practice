// ��д�����жϻ��Ĵ����Ƿ��� 1���񷵻� 0
#include<iostream>
using namespace std;

#define N 100

int f(char* s);

int mainx()
{
	cout << "�������ַ��� ��";
	char s[N];
	cin >> s;

	int flag = f(s);

	if (flag == 1)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

	system("pause");
	return 0;
}

int f(char* s)
{
	// ��¼�ַ�������
	int ret = 0;
	for (int i = 0; i < N; i++)
	{
		if (s[i] == '\0')
		{
			ret = i;
			break;
		}
	}
	cout << ret << endl;	// ��¼�ַ�������

	// �ж�
	int x = ret - 1;
	int flag = 0;
	for (int i = 0; i < ret / 2; i++)
	{
		if (s[i] != s[x])
		{
			break;
		}
		x--;
		flag++;
	}

	// �ж����
	if (flag == ret/2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}