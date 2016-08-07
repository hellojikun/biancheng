/*
判断数组是否为二叉排序树的后续遍历序列
由于数组的最后一个数为二叉排序的根节点，可把数组分为两部分
第一部分为左子树节点比根节点小，第二部分为右子树比根节点大
可以用递归来判断该数组是否满足此规律
*/
#include<iostream>
using namespace std;

bool Verify(int arr[],int length)
{
	if(arr == NULL || length <= 0)
		return false;
    int root = arr[length-1];
	
	int i = 0;
	for(;i < length-1; ++i)
	{
		if(arr[i] > root)
		{
			break;
		}

	}
	int j = i;
	for(;j < length-1; ++j)
	{
		if(arr[j] < root)
		{
			return false;
		}

	}
	bool left = true;
	if(i > 0)
		left = Verify(arr,i);
	bool right = false;
	if(i < length - 1)
		right = Verify(arr+i,length - i - i);
	return (left && right);


}