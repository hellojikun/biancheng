//层次遍历二叉树 使用广度优先遍历算法
#include<iostream>
using namespace std;
typedef struct Node
{
	int val;
	Node * _left;
	Node * _right;
}Node,* BiTree;

void printfBiTree(BiTree Root)
{
	if(!Root)
		return;
	queue<Node *> q;
	q.push(Root);
	while(!q.empty())
	{
		Root = q.front();
		count<<Root->val;<<" ";
		q.pop();
		if(Root->_left != NULL)
		{
			q.push(Root->_left);

		}
		if(Root->_right != NULL)
		{
			q.push(Root->_right);
		}
	}

}