/*
�ж������Ƿ�Ϊ�����������ĺ�����������
������������һ����Ϊ��������ĸ��ڵ㣬�ɰ������Ϊ������
��һ����Ϊ�������ڵ�ȸ��ڵ�С���ڶ�����Ϊ�������ȸ��ڵ��
�����õݹ����жϸ������Ƿ�����˹���
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