#include <stdio.h>

int main()
{
	int a;//输入的待判断数值 
	int b;//除数
	int c=1; //判断 
	
	scanf("%d", &a);//写入输入的数值 
	
	for ( b=2; b<a; b++){
	    if(a % b == 0){
		c=0; 
		break;
	    }
}
if(c==1) {
	printf("是素数");
}else{
	printf("不是素数");
}
	
	return 0;
}
