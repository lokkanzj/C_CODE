#include <stdio.h>

int main()
{   int a = 0;

	printf("��������Ҫ�������ֵ\n");
	
	scanf("%d", &a);
	
	int zzz = a/100;
	int zz = (a-(a/100)*100)/10;
	int z = a-(zzz*100+zz*10);
	int aa = z*100+zz*10+zzz;
	
	printf("%d", aa);
	return 0;
}
