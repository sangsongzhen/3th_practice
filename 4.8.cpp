// ����һ�����֣��ҳ����еĴ�д��ĸ��Сд��ĸ���ո����ּ������ַ����ж���
#include<iostream>
#include<string>
using namespace std;

int mainx()
{
	cout << "�������ַ��� ��";
	string str;
	getline(cin,str);	// ����һ���ַ��������Խ��տո�������������#include<string>��

	int cap = 0;
	int small = 0;
	int space = 0;
	int num = 0;
	int other = 0;

	int a = str.length();	// �ַ�������
	for (int i = 0; i < a; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cap++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			small++;
		}
		else if (str[i] == ' ')
		{
			space++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num++;
		}
		else
		{
			other++;
		}
	}

	cout << "��д��" << cap << "\t";
	cout << "Сд��" << small << "\t";
	cout << "�ո�" << space << "\t";
	cout << "���֣�" << num << "\t";
	cout << "������" << other << endl;

	system("pause");
	return 0;
}