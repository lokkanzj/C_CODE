#include"game.h"

//检查

//游戏逻辑
void game(void)
{
	int x = 0;
	int y = 0;
	int G = 1;
	char mine[X + 2][Y + 2]={ 0 };
	char form[X][Y] = { 0 };

	initial(mine,X+2,Y+2,'0');//初始化11*11(!)
	initial(form, X, Y, '*');//初始化9*9(!)
	print(form,X,Y);//打印(!)
	printf("=========================================\n");
	Lay_mines(mine);
	print(mine, X+2, Y+2);//打印(!)
	do
	{
		scanf_s("%d,%d",&x,&y);
		G = examine(mine,form,x,y);
	} while (G);
}

//初始化(!)
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

//打印(!)
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

//埋雷(!)
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

//检查
int examine(char sd[X+2][Y+2],char cd[X][Y], int x, int y)
{
	if (sd[x][y] == '1')
	{
		printf("失败");
		return 0;
	}

	if (sd[x][y] == '0');
	{
		//显示九宫格位置的非‘1’格子
		bbb();
	}

}

void bbb(char k[X][Y])
{
	//如果不是‘1’显示；
}