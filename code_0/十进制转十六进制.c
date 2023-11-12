#include <stdio.h>

int main()
{
	int a = 0;
	
	printf("请输入十进制两位数");
	
	scanf("%d", &a);
	
	int b = a/16;
	int c = a%16;
	int d = b*10+c;
	
	printf("十六进制为%d", d);
return 0;
}
