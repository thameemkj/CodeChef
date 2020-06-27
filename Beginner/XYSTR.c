#include<stdio.h>
#include<string.h>

int main()
{
	int testcases,results[100],pair_count,i,j;
	char string[100000];
	
	scanf("%d",&testcases);
	for(i=0;i<testcases;i++)
	{
		scanf("%s[^\n]*c",string);
		pair_count=0;
		for(j=0;j<strlen(string)-1;j++)
		{
			if(string[j]!=string[j+1])
			{
				pair_count++;
				j++;
			}
		}
		results[i]=pair_count;
	}
	
	for(i=0;i<testcases;i++)
	printf("%d\n",results[i]);
	
	return 0;
}
