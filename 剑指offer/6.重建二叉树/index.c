#include<stdio.h>
#include<stdlib.h>
typedef  struct Node
{
	int			_val;
	struct Node *		_left;
	struct Node *		_right;
}Node;
Node * constructcore(int *startA,int* endA,int* startB,int* endB)
{
	int rootVlue = startA[0];
	int * p = startB;
	int leftLength;
	int rightLength;
	Node * root = (Node* )malloc(sizeof(Node));
	root->_val = rootVlue;
	root->_left = NULL;
	root->_right = NULL;
	//最后一个字符
	if(startA == endA){
		if(startA == startB&&startA == endB){
			return root;	   //正常情况 OK
		}
		else{
			return NULL;	//错误情况，需要抛出一个异常
		}
	}
		/********************************************/
		//在B中找到root
		while(p != endB && *p != rootVlue)
			p++;
		//如果到了B末尾
		if(p == endB && *p != rootVlue){
			return NULL;
		}
		/*************************************************/
		//P左边的是左子树部分 P右边的是右子数部分
		leftLength = p - startA;
		rightLength =endB - p; 
		if(leftLength > 0){
			root->_left = constructcore(startA+1,startA+leftLength,startB,p-1 );
		}
		if(rightLength > 0){
			root->_right = constructcore(startA+leftLength+1,endA,p+1,endB);
		}
		return root;
			
}


Node * construct(int * A,int * B,int L)
{	
	Node * result;
	if(A == NULL || B == NULL || L < 0){
		return NULL;
	}
	result =	constructcore(A,A+L,B,B+L-1);
	return result;
	
}

int main()
{
	int a[8] ={1,2,4,7,3,5,6,8};
	int b[8] ={4,7,2,1,5,3,8,6};
	Node * root;
	root = construct(a,b,8);
	

	
}

