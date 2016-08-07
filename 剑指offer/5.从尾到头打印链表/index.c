/*
这个是打印链表，不是逆置链表，不可改变链表的结构，只能输出打印，切记
 */
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
	int val;
	struct Node * next;

}Node;

void RePrint(Node **pListHead)
{
	int a[50];
	int i=0;
	Node *p;
	p = *pListedHead;
	while(p ! =NULL)
	{
		a[i] = p->val;
		i++;
		p = p->next;
	
	}
	while(i >= 0)
	{
		printf("%d n"a[i]);
		i--;
	}

}