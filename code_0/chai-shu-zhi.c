#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******1.play******\n");
	printf(" *****2.esc******\n");
}

void game()
{
	int i = 0;
	int x = 0;
	srand(( unsigned int )time(NULL));
	int a = rand();
	//printf("%d\n",a);
    while(x !=  a)
	{
		printf("请猜\n");
	    scanf("%d",&x);
	    //system("cls");
	    if(x<a)
	    {
	    	printf("小了\n"); 
		}else if(x>a){
			printf("大了\n");
		}else if(x==a){
			printf("猜到了");
		}
		i++;
		printf("猜了%d次\n**********\n",i);
		//printf("%d\n",a);
	    
	}  
}
int main()
{
	int input  = 0;
	
	do
	{
		menu();
		printf("请选择->\n");
		scanf("%d",&input);
		system("cls");
		
		switch(input)
		{
			case 1:
				//printf("猜数字\n");
				game();
				break; 
			case 0:
				break;
			default:
				printf("输入错误,请重新选择\n");
				break; 
		}
	}while(input);
	printf("退出ESSC"); 
	
	return 0;
}
