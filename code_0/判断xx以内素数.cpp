#include <stdio.h>

int main()
{
	int x;//����
	int y;
	
	printf("��������Ҫ�ж϶������ڵ�����"); 
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
