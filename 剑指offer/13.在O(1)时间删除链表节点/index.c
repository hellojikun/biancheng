/*
�������������ͷָ���һ���ڵ�ָ�룬������O(1)ʱ��ɾ���ýڵ�
����ڵ��뺯������
*/
/***************************************************************/
/*
������O(1)��ʱ����ɾ��ָ��
1.��֪ɾ�������ָ�����ֱ�Ӷ�λ
2.����֪���������һ���ڵ�
�����ǣ����ɾ���ڵ����һ��ָ��
�� ɾ���ڵ��ǰһ���ڵ�λ����O(1)�в�����
���ǿ��Խ��¸��ڵ����ݸ��Ƶ�Ҫɾ���Ľڵ��ϣ���Ҫɾ���ڵ��Ϊ��һ���ڵ�
Ҫ�����Թٹ�ͨ�Ƿ����Ҫɾ��ָ��ָ��Ľڵ㣬�ܷ��ͨ
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
	if(!pListHead ||!pToBeDeleted)//�쳣����ж�
		return;
	if(pToBeDeleted->next != NULL)//ɾ���Ĳ���β�ڵ�
	{
		p = pToBeDeleted->next;
		pToBeDeleted->val = p->val;
		pToBeDeleted->next = p->next;
		free(p);
		p = NULL;
		


	}else if(*pListHead == pToBeDeleted)//ɾ������ͷ���Ҳ��β�ڵ�
	{
		 free(*pListHead);
		 *pListHead = NULL;
		 pToBeDeleted = NULL;

	}else							//ɾ������β�ڵ㵫����ͷ���
	{
		p = *pListHead;
		while(p->next != pToBeDeleted)
			p++;
		p->next = NULL;
		free(pToBeDeleted);
		pToBeDeleted = NULL;


	}

		


	
}