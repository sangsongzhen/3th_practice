//������a[N]�����е�����(n��)�Ѿ���С�����ź����򣬽�����һ��
//����Ҫ��ԭ������Ĺ��ɽ������������С�д���㷨����
#include<iostream>
using namespace std;

void insert(int a ,int *arr)
{
	for (int i = 0; i < 5; i++)
	{
		if (a < arr[i])
		{
			for (int j = 4; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i] = a;
			break;
		}
		else
		{
			arr[4] = a;
		}
	}
}

int mainx()
{
	int arr[5] = { 11,33,55,77 };
	int a;		//����Ҫ�������
	cout << "input a num :";
	cin >> a;

	insert(a ,arr);
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}