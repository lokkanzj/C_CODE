#include"game.h"

//���

//��Ϸ�߼�
void game(void)
{
	int x = 0;
	int y = 0;
	int G = 1;
	char mine[X + 2][Y + 2]={ 0 };
	char form[X][Y] = { 0 };

	initial(mine,X+2,Y+2,'0');//��ʼ��11*11(!)
	initial(form, X, Y, '*');//��ʼ��9*9(!)
	print(form,X,Y);//��ӡ(!)
	printf("=========================================\n");
	Lay_mines(mine);
	print(mine, X+2, Y+2);//��ӡ(!)
	do
	{
		scanf_s("%d,%d",&x,&y);
		G = examine(mine,form,x,y);
	} while (G);
}

//��ʼ��(!)
void initial(char s[X][Y], int x, int y,char ste)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			s[i][j] = ste;
		}
	}
}

//��ӡ(!)
void print(char s[X][Y],int x,int y)
{
	int i = 0;
	int j = 0;

	printf("+ ");
	printf("0 1 2 3 4 5 6 7 8\n");
	for (i = 0; i < x; i++)
	{
		printf("%d ", i);
		for (j = 0; j < y; j++)
		{
			printf("%c ", s[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//����(!)
void Lay_mines(char tttttt[X][Y])
{
	int x = 0;
	int y = 0;
	int i = 10;
	while (i)
	{
		x = rand() % 9;
		y = rand() % 9;//32767.
		if (tttttt[x][y] == '0')
		{
			tttttt[x][y] = '1';
			i = i-1;
		}
	}
}

//���
int examine(char sd[X+2][Y+2],char cd[X][Y], int x, int y)
{
	if (sd[x][y] == '1')
	{
		printf("ʧ��");
		return 0;
	}

	if (sd[x][y] == '0');
	{
		//��ʾ�Ź���λ�õķǡ�1������
		bbb();
	}

}

void bbb(char k[X][Y])
{
	//������ǡ�1����ʾ��
}