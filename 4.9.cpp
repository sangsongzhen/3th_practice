// ����һ��Ӣ�ĵ��ʣ� �ٶ�������һ�����߶���ո������ ͳ���м�������
#include<iostream>
#include<string>
using namespace std;

int main9()
{
	cout << "Input some words :";
	string str;
	getline(cin, str);
	//cout << str << endl;

	int len = str.length();
	int num = 0;	// ������

	int i = 0;
	for (; i < len; i++)
	{
		num++;	// Ĭ�ϵ�һ���ַ�����ĸ
		// �������� + �ո�
		int j = i;
		for (; j < len; j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
			{
				continue;
			}
			else
			{
				// �����ո�
				int k = j;
				for (; k < len; k++)
				{
					if (str[k] == ' ')
					{
						continue;
					}
					else
					{
						i = k;
						break;
					}
				}

				break;
			}
		}
	}
	cout << "The quantity of words is :" << num << endl;

	system("pause");
	return 0;
}