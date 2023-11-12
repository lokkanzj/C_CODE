#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	
	printf("输入需要互换的数值\n");
	
	scanf("%d %d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("交换后的两个数是a=%d b=%d\n",a,b);
	
return 0;
}
