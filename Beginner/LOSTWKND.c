#include<stdio.h>
int main()
{
	int testcases,array[5],p,result[1000],sum,i,j;
	
	scanf("%d\n",&testcases);
	
	for(i=0;i<testcases;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			scanf("%d[^\n]*c",&array[j]);
			sum=sum+array[j];
		}
		scanf("%d",&p);
		if(sum>168)
			result[i]=1;
		else
		{
			sum=sum*p;
			if(sum<=120)
				result[i]=0;
			else
				result[i]=1;
		}
	}
	
	for(i=0;i<testcases;i++)
		if(result[i]==0)
			printf("No\n");
		else
			printf("Yes\n");
	
	return 0;
}
