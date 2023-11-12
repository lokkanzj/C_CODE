#include <stdio.h>
//题目：输入几月几日，输出这是这一年的第几天 

int main()
{
	int a;
	int b;
	int c = 0;
	int q;
	
	printf("请输入某年某月某日（例：0000，00，00）：");
	//scanf("%d",&a); 
	//scanf("%d",&b);
	//printf("a=%d,b=%d",a,b);
	scanf("%d,%d,%d",&q,&a,&b);
	
	if(q%400==0 || (q%4==0 && q%100!=0) )
	{
		c=1; 
	}else{
		c=0;
	}
	
	switch(a)
	{
		case 1:printf("%d月%d日是%d年第 %d 天",a,b,q,b);break;  //printf("kkk");   //1000+b printf
		case 2:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+31);break;
		case 3:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+59);break;
		case 4:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+90);break;
		case 5:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+120);break;
		case 6:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+151);break;
		case 7:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+181);break;
		case 8:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+212);break;
		case 9:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+243);break;
		case 10:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+273);break;
		case 11:printf("%d月%d日是%d年第 %d 天",a,b,q,b+c+304);break;
		case 12:printf("%d月%d日是%d年第 %d 天,",a,b,q,b+c+334);break;
		default :printf("月份错误"); break;
		
	}
	
	return 0;
}
