#include <stdio.h>

int main()
{
	const int maxnumber =25;
	int isprime[maxnumber];
	int i;
	int x;
	for(i=0;i<maxnumber;i++)//标记数组所有为//真// 
	{
		isprime[i]=1;
	}
	for(x=2;x<maxnumber;x++)//去掉标记;倍数 
	{
		if(isprime[x])
		{
			for(i=2;i*x<maxnumber;i++)
			{
				isprime[i*x]=0;
			}
		}
	}
	for(i=2;i<maxnumber;i++)
	{
		if(isprime[i])
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
	
	return 0;
}

