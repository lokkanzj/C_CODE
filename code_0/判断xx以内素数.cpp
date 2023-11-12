#include <stdio.h>

int main()
{
	int x;//基数
	int y;
	
	printf("请输入需要判断多少以内的素数"); 
	scanf("%d", &y); 
	
	for ( x = 3; x<y; x++)
	{   int isPrime = 1;
	    int i;
		for ( i=2; i<x; i++ )
		{
			if ( x % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1) {
			printf("%d ", x);
		}
	} 
	printf("\n");
	
	return 0;
}
