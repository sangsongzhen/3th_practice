//��n����������Ҫ����ĸ�Ⱥ�˳�����У������
#include<iostream>
using namespace std;
#define N 5

int main()
{
	string name[N] = {};
	cout << "input some country names (devided by space):";
	for (int i = 0; i < N; i++)
	{
		cin >> name[i];
	}
	
	/* ����ĸ��ȡ */
	char name1[N] = {};
	for (int i = 0; i < N; i++)
	{
		name1[i] = name[i][0];
	}

	/* ���� */
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++) 
		{
			if (name1[j] > name1[j + 1])
			{
				string temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
			}
		}
		/* ˢ������ĸ */
		for (int i = 0; i < N; i++)
		{
			name1[i] = name[i][0];
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << name[i] << endl;
	}

	system("pause");
	return 0;
}