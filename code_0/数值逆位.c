#include <stdio.h>

int main ()
{
	int a;//�������ֵ
	int b = 0;//�����ֵ 
	int c = 0;//���� 
	int d = 0;
	
	printf("������");
	scanf("%d", &a);
	
	while(a>0){
	c=a%10;//ȡ��ĩλ 
	d = d*10+c;
	a/=10;//ȥ��ĩλ
}
	printf("%d", d);
	
	return 0; 
 } 
