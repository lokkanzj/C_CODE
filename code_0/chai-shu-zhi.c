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
		printf("���\n");
	    scanf("%d",&x);
	    //system("cls");
	    if(x<a)
	    {
	    	printf("С��\n"); 
		}else if(x>a){
			printf("����\n");
		}else if(x==a){
			printf("�µ���");
		}
		i++;
		printf("����%d��\n**********\n",i);
		//printf("%d\n",a);
	    
	}  
}
int main()
{
	int input  = 0;
	
	do
	{
		menu();
		printf("��ѡ��->\n");
		scanf("%d",&input);
		system("cls");
		
		switch(input)
		{
			case 1:
				//printf("������\n");
				game();
				break; 
			case 0:
				break;
			default:
				printf("�������,������ѡ��\n");
				break; 
		}
	}while(input);
	printf("�˳�ESSC"); 
	
	return 0;
}
