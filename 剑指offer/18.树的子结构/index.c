/*�������Ŷ�����A,B�ж�B�ǲ���A������*/
/*
������
�ж�B�Ƿ���A��������
2.B����A�����ڵ�һһ�Ƚϣ�
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int val;
	struct Node* left;
	struct Node *right;
}Node;
int IsTreecore(Node*A,Node*B)
{
	if(A==NULL)
		return -1;
	if(B ==NULL)
		return 1;
	if(A->val != B->val)
		return -1;
	return IsTreecore(A->left,B->left)&&IsTreecore(A->right,B->right);
}
int IsTree(Node *A,Node*B)
{
	int result =0;
	
	if(A == NULL || B ==NULL)
	return 0;
	if(B->val == A->val)
	{
		result = IsTreecore(A,B);
	}
	if(!result)
		result = IsTree(A->left,B);
	if(!result)
		result = IsTree(A->right,B);
return result;
	
	
}