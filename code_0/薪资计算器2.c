#include <stdio.h>

int main()
{
	const double a = 40;//������׼ʱ�� 
	const int b = 50;//����ʱн
	int c = 0;//����ʵ��ʱ��
	double d = 0;//ʵ��н�� 
	
	printf("�����빤��Сʱ��\n");
	scanf("%d", &c );
	
	if(c>a){
		d = a*b+(c-a)*(50*1.5);
	}else{
		d = c*b;
	} 
	
	printf("���н����%f",d);
	
return 0;
}

