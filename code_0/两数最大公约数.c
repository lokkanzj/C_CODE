#include <stdio.h>

int main()
{
	int a;//输入的待处理数 
	int b;//输入的待处理数
	int c = 1;//递增除数 c++ 
	int d = 1;//d++
	int e = 0;//两数最小的
	int f = 0;
	
	scanf("%d %d", &a, &b);//抓取 
	//printf("%d %d", a, b);
	
	if(a>b){//判断两数大小 
		e=b;
	}else{
		e=a;
	} 
	
	while(e>=c){
		if(a%c==0){
			if(b%c==0){
			f=c;
			}
		}
		c++;//除数递增 
}

printf("%d",f);	
	return 0;
}
