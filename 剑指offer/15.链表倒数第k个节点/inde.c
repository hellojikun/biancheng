#include<stdio.h>
/*
	��������ָ��AB��ָ�����k�����룬��A��������β��ʱ��Bָ��
	λ�ü��ǵ�����k���ڵ�
	ע�⣺1������ͷΪ��
		  2��������С��k


*/
typedef struct Node
{
	int val;
	Node * next;
} Node, *LinkList;

Node * FindTail(LinkList ,int k)
{
	Node * A; int i;
	Node * B;
	A = L;
	b = NULL:
	if(L == NULL || k == 0)
		return NULL;
	for(i = 0;i < k-1;++i)
	{
		if(A->next != NULL)
			A = A->next;
		else 
			return NULL;
	}
	B = L;
	while(P->next != NULL)
	{
		A = A->next;
		b = B->next;
	}
	return B;

}