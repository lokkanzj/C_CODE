#include <stdio.h>

int main()
{
	int price=0;
	int a = 0;
	
	printf("���������ѽ�Ԫ)\n");
	scanf("%d",&price);
	
	printf("������Ʊ���ܽ��\n");
	scanf("%d", &a);
	
	int change = a-price;
	
	if(change<0){
		printf("����\n");
	
	}
	if(change>0){
		printf("����%dԪ\n",change);
		
	}
	
	return 0; 
}
