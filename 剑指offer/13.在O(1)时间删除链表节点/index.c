/*
给定单向链表的头指针和一个节点指针，定义在O(1)时间删除该节点
链表节点与函数如下
*/
/***************************************************************/
/*
分析在O(1)的时间里删除指针
1.已知删除链表的指针可以直接定位
2.可以知道链表的下一个节点
问题是：求出删除节点的上一个指针
求 删除节点的前一个节点位置在O(1)中不可能
我们可以将下个节点内容复制到要删除的节点上，将要删除节点变为下一个节点
要和面试官沟通是否必须要删除指针指向的节点，能否变通
  */
#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode
{
	int val;
	struct	ListNode * next;

}ListNode;
void DeleteNode(ListNode ** pListHead,ListNode * pToBeDeleted)
{	 ListNode * p;
	if(!pListHead ||!pToBeDeleted)//异常情况判断
		return;
	if(pToBeDeleted->next != NULL)//删除的不是尾节点
	{
		p = pToBeDeleted->next;
		pToBeDeleted->val = p->val;
		pToBeDeleted->next = p->next;
		free(p);
		p = NULL;
		


	}else if(*pListHead == pToBeDeleted)//删除的是头结点也是尾节点
	{
		 free(*pListHead);
		 *pListHead = NULL;
		 pToBeDeleted = NULL;

	}else							//删除的是尾节点但不是头结点
	{
		p = *pListHead;
		while(p->next != pToBeDeleted)
			p++;
		p->next = NULL;
		free(pToBeDeleted);
		pToBeDeleted = NULL;


	}

		


	
}