#include <stdio.h>

int main()
{const int a = 60;//及格线
int b = 0;

printf("请输入成绩\n"); 
scanf("%d", &b);

if(b<a){
	printf("很遗憾，您没有及格"); 
}else{
	printf("恭喜您及格"); 
}	
return 0;
}
