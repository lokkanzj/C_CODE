#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a =rand()%100+1;
	int b = 0;
	int c = 0;
	
	printf("已准备好1到100之间的数\n");
	
	do
	{
		printf("请猜\n");
		scanf("%d",&c);
		b++;
		if(c>a){
			printf("您猜的数过大\n");
		} else if(c<a){
			printf("你猜的数过小\n");
		}
	 } while (c != a);
	 
	 printf("您用了%d次就猜中了", b);
	 
	 return 0;
}
