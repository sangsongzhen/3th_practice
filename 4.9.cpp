// 输入一行英文单词， 假定单词由一个或者多个空格隔开， 统计有几个单词
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
	int num = 0;	// 单词数

	int i = 0;
	for (; i < len; i++)
	{
		num++;	// 默认第一个字符是字母
		// 跳过单词 + 空格
		int j = i;
		for (; j < len; j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
			{
				continue;
			}
			else
			{
				// 跳过空格
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