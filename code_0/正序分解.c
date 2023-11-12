#include <stdio.h>
int main()
{
	int a;//需要正序的数
	int b = 0;//计数（位数）
	int c = 1;//储存1xxx 
	int d = 0;
	int e = 0;
		
	scanf("%d", &a);//读入a
	d=a;//替a保存数值 
	
	while (a>9){//算出a的位数 
		a /= 10;
		b++;
	}
	printf("%d位\n", b);
	
	while(b>0){//位数转为1xxx 
		c*= 10;
		b = b-1;
	}
	
	//printf("%d", c);
	
	while (d>=0) {
	e = d/c;//取出首位
    printf("%d", e);//打印首位 
	d= d%c;
	
	if(c>1)
	{
		printf(" ");
	}
	c /= 10;
    }
	
	return 0;
}
