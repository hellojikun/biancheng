/*
����Ǵ�ӡ�������������������ɸı�����Ľṹ��ֻ�������ӡ���м�
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