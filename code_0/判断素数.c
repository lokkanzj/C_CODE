#include <stdio.h>

int main()
{
	int a;//����Ĵ��ж���ֵ 
	int b;//����
	int c=1; //�ж� 
	
	scanf("%d", &a);//д���������ֵ 
	
	for ( b=2; b<a; b++){
	    if(a % b == 0){
		c=0; 
		break;
	    }
}
if(c==1) {
	printf("������");
}else{
	printf("��������");
}
	
	return 0;
}
