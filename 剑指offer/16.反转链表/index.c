/*
  定义一个函数，输出一个链表的头结点，反转该链表并输出反转链表后的头结点
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
//头插法建立链表
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
//打印链表
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
//有头节点头插法逆转链表
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
//无头节点只有头指针逆转链表
void ReverseList1(Node * pHead)
{
	Node *pRHead = NULL;//逆转后头节点
	Node *pNode = pHead;//当前结点
	Node *pPrev = NULL;//当前节点的前一节点
	Node *pNext = NULL;//当前结点的下一节点
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

//合并两个排序列表








