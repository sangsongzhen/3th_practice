// �����������ַ��У��Կ��У�ֻ����س������У������������������С�
#include<iostream>
using namespace std;
#define N 9

int main10()
{
	cout << "Input strings :";
	string str[N] = {};

	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}

	// ͳ�Ƹ��ַ�������
	int cnt[N] = {};
	for (int i = 0; i < N; i++)
	{
		cnt[i] = str[i].length();
	}

	// �ҳ���ַ����±�
	int flag = 0;
	for (int i = 0; i < 8; i++)
	{
		if (cnt[i + 1] > cnt[i])
		{
			cnt[i] = cnt[i + 1];
		}
		else
		{
			cnt[i + 1] = cnt[i];
		}
	}

	cout << str[flag] << endl;


	system("pause");
	return 0;
}