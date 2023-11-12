#include <stdio.h>

int main()
{
	int price=0;
	int a = 0;
	
	printf("请输入消费金额（元)\n");
	scanf("%d",&price);
	
	printf("请输入票面总金额\n");
	scanf("%d", &a);
	
	int change = a-price;
	
	if(change<0){
		printf("金额不够\n");
	
	}
	if(change>0){
		printf("找您%d元\n",change);
		
	}
	
	return 0; 
}
