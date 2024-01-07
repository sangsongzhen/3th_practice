// 输入一行文字，找出其中的大写字母、小写字母、空格、数字及其他字符各有多少
#include<iostream>
#include<string>
using namespace std;

int mainx()
{
	cout << "请输入字符串 ：";
	string str;
	getline(cin,str);	// 接受一个字符串，可以接收空格并输出，需包含“#include<string>”

	int cap = 0;
	int small = 0;
	int space = 0;
	int num = 0;
	int other = 0;

	int a = str.length();	// 字符串长度
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

	cout << "大写：" << cap << "\t";
	cout << "小写：" << small << "\t";
	cout << "空格：" << space << "\t";
	cout << "数字：" << num << "\t";
	cout << "其他：" << other << endl;

	system("pause");
	return 0;
}