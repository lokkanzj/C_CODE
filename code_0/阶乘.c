#include <stdio.h>

int main()
{
	int a;//�������
	int b = 1;//b++
	int c = 1;//�������� 
	
	printf("������");
	scanf("%d", &a);
	
	while(b<=a){
		c*=b;
		b++; 
}
	
	printf("%d�Ľ׳�%d", a,  c);
	
	return 0;
}
