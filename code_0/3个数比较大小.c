#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	
	printf("请输入三个整数");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			max = a;
		}else{
			max = c;
		}
		 
	}else {
	    if(b>c){
		max = b;
	} else {
		max = c;
	}
    }
	
	printf("三个数中最大的是%d", max);
	
return 0;
}
