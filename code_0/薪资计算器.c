#include <stdio.h>

int main()
{
	int a = 0;//����ʵ��ʱ��
	double  b = 0;//Сʱн��
	const int m = 40;//ÿ�ܱ�׼����ʱ�� 
	double c = 0;
	
	printf("������һ���ڹ���ʱ�䣨Сʱ)");
	scanf("%d",&a);
	
	printf("������ÿСʱн��");
	scanf("%lf",&b);
	
	if (a>m){
		c = b*m+(a-m)*(b*1.5);//�Ӱ�1.5��н�� 
	}else{
		c = a*b;
	}
	
	printf("����н����%f",c);
return 0;
}
