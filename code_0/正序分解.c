#include <stdio.h>
int main()
{
	int a;//��Ҫ�������
	int b = 0;//������λ����
	int c = 1;//����1xxx 
	int d = 0;
	int e = 0;
		
	scanf("%d", &a);//����a
	d=a;//��a������ֵ 
	
	while (a>9){//���a��λ�� 
		a /= 10;
		b++;
	}
	printf("%dλ\n", b);
	
	while(b>0){//λ��תΪ1xxx 
		c*= 10;
		b = b-1;
	}
	
	//printf("%d", c);
	
	while (d>=0) {
	e = d/c;//ȡ����λ
    printf("%d", e);//��ӡ��λ 
	d= d%c;
	
	if(c>1)
	{
		printf(" ");
	}
	c /= 10;
    }
	
	return 0;
}
