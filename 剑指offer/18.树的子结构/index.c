/*输入两颗二叉树A,B判断B是不是A的子树*/
/*
分析：
判断B是否是A的子树。
2.B树和A子树节点一一比较，
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