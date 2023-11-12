#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


//菜单
void menu()
{
    printf("******************************\n");
    printf("*********1.play 0.exit********\n");
    printf("******************************\n");
}

//游戏
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//棋盘 
	InitBoard(board, ROW, COL);//初始化棋盘
	DispalyBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		ret = IsWin(board, ROW, COL);//判断输赢

		if (ret != 'C')
		{
			break;
		}
		system("cls");
		DispalyBoard(board, ROW, COL);//打印棋盘
		ComputerMove(board, ROW, COL);//电脑下棋
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		system("cls");
		DispalyBoard(board, ROW, COL);//打印棋盘
	}
	if (ret == '*')
	{
		printf("玩家胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DispalyBoard(board, ROW, COL);
}

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

//打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)

				printf("|");


		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf_s("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标是否合法
		{
			if (board[x - 1][y - 1] == ' ')//如果这个位置是空格，合法
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("错误：请重新输入\n");
			}
		}
		else
		{
			printf("错误：请重新输入\n");
		}
	}
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:\n");
	int x = 0;
	int y = 0;
	while (1)
	{

		x = rand() % row;//电脑随机生成取余数row（3）
		y = rand() % col;

		if (board[x][y] == ' ')//判断是否合法
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//返回赢家棋子
		}
	}

	//判断列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];//返回赢家棋子
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//返回赢家棋子
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//返回赢家棋子
	}

	//玩家或者电脑都没有赢，平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	return 'C';
}

//判断和棋
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
