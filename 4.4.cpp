// �ҳ�һ����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ���������ڸ�������С��Ҳ����û�а���
#include<iostream>
using namespace std;

int mainx()
{
	int arr[3][4] = {	{1,8,4,3},
						{4,5,2,1},
						{4,6,8,0} };

	int arrx[3] = {};	// ������洢
	int arry[4] = {};	// ������洢

	int x = 0;	// �����ֵ�±�
	int y = 0;	// �����ֵ�±�

	//	�������ֵ�±�

	for (int i = 0; i < 4; i++)
	{
		cout << arry[i] << "\t";
	}

	cout << endl;

	system("pause");
	return 0;
}