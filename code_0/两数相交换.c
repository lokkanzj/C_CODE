#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	int c=0;
	
	printf("������Ҫ��������ֵ\n");
	
	scanf("%d %d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("���������������a=%d b=%d\n",a,b);
	
return 0;
}
