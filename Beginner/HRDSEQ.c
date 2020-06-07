#include<stdio.h>

int seq_array[2][128]={{0},{1}},index_array[3][128]={{0},{0},{0}},seq_maxi=0,index_maxi=0,seq_maximum=-1;

void fun(int limit)
{

	int i,num;
	limit=limit-seq_maxi-1;

	while(limit--)
	{
		num=seq_array[0][seq_maxi];

		if(num>seq_maximum)
		{
			seq_maximum=num;
			seq_maxi++;
			seq_array[0][seq_maxi]=0;
			index_array[2][0]=index_array[1][0];
			index_array[1][0]=seq_maxi;
			seq_array[1][seq_maxi]=seq_array[1][index_array[2][0]]+1;
		}
		else
		{
			for(i=0;i<=index_maxi;i++)
				if(index_array[0][i]==num)
					break;
			num=index_array[1][i]-index_array[2][i];
			for(i=0;i<=index_maxi;i++)
				if(index_array[0][i]==num)
					break;
			if(i>index_maxi)
			{
				index_maxi++;
				seq_maxi++;
				index_array[0][index_maxi]=num;
				index_array[1][index_maxi]=seq_maxi;
				index_array[2][index_maxi]=seq_maxi;
				seq_array[0][seq_maxi]=num;
				seq_array[1][seq_maxi]=1;
			}
			else
			{
				seq_maxi++;
				index_array[2][i]=index_array[1][i];
				index_array[1][i]=seq_maxi;
				seq_array[0][seq_maxi]=num;
				seq_array[1][seq_maxi]=seq_array[1][index_array[2][i]]+1;
			}
		}
	}
}

int main()
{
	int testcases,input,j,results[128];
	scanf("%d",&testcases);
	for(j=0;j<testcases;j++)
	{
		scanf("%d",&input);
		if(input-1>seq_maxi)
			fun(input);
		results[j]=seq_array[1][input-1];

	}

	for(j=0;j<testcases;j++)
		printf("%d\n",results[j]);
	return 0;
}
