#include <stdio.h>

int main()
{
	int a;
	
	printf("请输入百分制成绩");
	scanf("%d", &a);
	
	a/=10;
	switch(a)
	{
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");
			break;
	}
	
	return 0;
}
