/*
  ����һ�����������һ�������ͷ��㣬��ת�����������ת������ͷ���
*/
/*
typedef struct Node
{
	int val;
	Node * next;

} Node, * LinkList;
  
LinkList RevaerseList(LinkList L)
{   Node * head;
    Node * p,q;
	head = (Node *)malloc(sizeof(Node));

	if(L==NULL)
	{
		return NULL;
	}
	else
	{
		head->next = NULL;
		p = L;
		
		while(p != NULL)
		{
			q = p->next;
			p->next = NULL;
			head->next = p;
			p = q;
		}
		return head->next;                    
	}
		

}
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct  Node
{
	char val;
	struct Node * next;
}Node,*LinkList
//ͷ�巨��������
void CreateFromHead(LinkList L)
{
	char c;
	Node *s;
	int flag = 1;
	if(L == NULL){
		return NULL;
	}
	while(flag)
	{
		c = getchar();
		if(c != '$')
		{
			s = (Node *)malloc(sizeof(Node));
			s->val = c;
			s->next = L->next;
			L->next = s;
		}else{
			flag = 0;
		}
	}
}
//��ӡ����
void Print(LinkList L)
{
	Node *s;
	if(L == NULL)
	{
		return NULL;
	}
	s = L->next;
	while(s != NULL)
	{
		printf("%c",s->val);
		s = s->next;
	}
}
//��ͷ�ڵ�ͷ�巨��ת����
void ReverseList(LinkList L)
{
	Node *p; Node *q;
	p = L->next;
	L->next = NULL;
	while(p != NULL)
	{
		q = p->next;
		p->next = L->next;
		L->next = p;
		p = q;
	}
}
//��ͷ�ڵ�ֻ��ͷָ����ת����
void ReverseList1(Node * pHead)
{
	Node *pRHead = NULL;//��ת��ͷ�ڵ�
	Node *pNode = pHead;//��ǰ���
	Node *pPrev = NULL;//��ǰ�ڵ��ǰһ�ڵ�
	Node *pNext = NULL;//��ǰ������һ�ڵ�
	if(pHead == NULL){
		return NULL:
	}
	while(pNode != NULL){
		pNext = pNode->next;
		if(pNext == NULL){
			pRHead = pNode;
		}
		pNode->pNext = pPrev;
		pPrev = pNode;
		pNode = pNext;

	}
	return pRHead;


}

//�ϲ����������б�








