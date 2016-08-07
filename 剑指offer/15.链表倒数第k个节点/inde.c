#include<stdio.h>
/*
	设置两个指针AB，指针相距k个距离，当A到达链表尾部时，B指针
	位置即是倒数第k个节点
	注意：1，链表头为空
		  2，链表长度小于k


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