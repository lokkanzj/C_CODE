#include <stdio.h>

int main()
{
	int a = 0;
	
	printf("������ʮ������λ��");
	
	scanf("%d", &a);
	
	int b = a/16;
	int c = a%16;
	int d = b*10+c;
	
	printf("ʮ������Ϊ%d", d);
return 0;
}
