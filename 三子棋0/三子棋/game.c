#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


//�˵�
void menu()
{
    printf("******************************\n");
    printf("*********1.play 0.exit********\n");
    printf("******************************\n");
}

//��Ϸ
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//���� 
	InitBoard(board, ROW, COL);//��ʼ������
	DispalyBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		ret = IsWin(board, ROW, COL);//�ж���Ӯ

		if (ret != 'C')
		{
			break;
		}
		system("cls");
		DispalyBoard(board, ROW, COL);//��ӡ����
		ComputerMove(board, ROW, COL);//��������
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		system("cls");
		DispalyBoard(board, ROW, COL);//��ӡ����
	}
	if (ret == '*')
	{
		printf("���ʤ\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DispalyBoard(board, ROW, COL);
}

//��ʼ������
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

//��ӡ����
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������꣺");
		scanf_s("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж������Ƿ�Ϸ�
		{
			if (board[x - 1][y - 1] == ' ')//������λ���ǿո񣬺Ϸ�
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��������������\n");
			}
		}
		else
		{
			printf("��������������\n");
		}
	}
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:\n");
	int x = 0;
	int y = 0;
	while (1)
	{

		x = rand() % row;//�����������ȡ����row��3��
		y = rand() % col;

		if (board[x][y] == ' ')//�ж��Ƿ�Ϸ�
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	//�ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//����Ӯ������
		}
	}

	//�ж���
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];//����Ӯ������
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//����Ӯ������
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//����Ӯ������
	}

	//��һ��ߵ��Զ�û��Ӯ��ƽ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	return 'C';
}

//�жϺ���
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
