#include<stdio.h>
#include<stdlib.h>

void permutation(char *str,int start,int end)
{
	int index;
	if(start==end)
	{
		printf("%s",str);
	}
	else
	{
		for(index=start;index<=end;index++)
		{
			swap(&str[start],&str[index]);
			permutation(str,start+1,end);
			swap(&str[start],&str[index]);
		}
	}
}

int main()
{
	int n,i;
	char str[n];
	scanf("%s",str);
	int low=0;
	permutation(str,0,n-1);
	return 0;
}

