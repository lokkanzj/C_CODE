#include"game.h"

int main()
{
	int a = 1;
	srand((unsigned)time(NULL));
	do
	{
		printf("1.play 0.esc\n");
		printf("请输入-:>");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("重新输入");
			break;
		}
	} while (a);

	return 0;
}
