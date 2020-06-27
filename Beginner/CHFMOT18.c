#include<stdio.h>

int main()
{
	int testcases,results[10000],i,count;
	unsigned int N,S,remain;
	
	scanf("%d",&testcases);
	for(i=0;i<testcases;i++)
	{
		scanf("%d %d",&S,&N);
		
		count=S/N;
		remain=S%N;
		
		if(remain!=0)
		{
			if(remain==1 || remain%2==0)
				count=count+1;
			else
				count=count+2;
		}
		
		results[i]=count;
	}
	
	for(i=0;i<testcases;i++)
	printf("%d\n",results[i]);
	
	return 0;
}
