#include <stdio.h>

int main()
{
	int a;//�������
	int b = 0;//b++
	int c = 0;
	
	do{
		printf("������");
		scanf("%d", &a);
		if( a != -1 ){
			c+=a;
			b++;
		}
	}while(a != -1 );
	
printf("ƽ����%f\n", 1.0*c/b);
	
	return 0;
}
