// 找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小。也可能没有鞍点
#include<iostream>
using namespace std;

int mainx()
{
	int arr[3][4] = {	{1,8,4,3},
						{4,5,2,1},
						{4,6,8,0} };

	int arrx[3] = {};	// 横坐标存储
	int arry[4] = {};	// 纵坐标存储

	int x = 0;	// 行最大值下标
	int y = 0;	// 列最大值下标

	//	遍历最大值下标

	for (int i = 0; i < 4; i++)
	{
		cout << arry[i] << "\t";
	}

	cout << endl;

	system("pause");
	return 0;
}