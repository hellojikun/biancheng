#include<stdio.h>
void fun (char*,char*);
void function (char *str){
	if(str == NULL)
		return ;
	else
		fun(str,str);
}
void fun(char* str, char * strBegin){
	if(*strBegin == '\0')
		printf("%s\n",str );
	else
	{
		for(char* p = strBegin; *p != '\0'; ++ p)
		{    //char *temp = (char *)malloc(sizeof(strBegin));
			//temp = *p;
			 //*p = *strBegin;
	          *p = 'a';
			//*strBegin = temp;
			printf("%c\n", *p);
			
		}
	}
}
int main(){
	char * a="abc";
	function(a);
}