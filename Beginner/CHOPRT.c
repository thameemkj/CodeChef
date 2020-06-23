#include<stdio.h>

int main()
{
	int testcases;
	unsigned int input1,input2;
	char results[10000];
	
	scanf("%d",&testcases);
	for(int i=0;i<testcases;i++)
	{
		scanf("%d %d",&input1,&input2);
		if(input1<input2)
		results[i]='<';
		else if(input1>input2)
		results[i]='>';
		else
		results[i]='=';
	}
	
	for(int i=0;i<testcases;i++)
	printf("%c\n",results[i]);
	
	return 0;
}
