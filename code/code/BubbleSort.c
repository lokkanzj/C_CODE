#include"me.h"

//ð������
void BubbleSort(int e[] , int a)
{
	for (int j=0;j<a-1;j++)
	{
		for (int i = 0; i < a - 1-j
			; i++)
		{
			//printf("%d ", e[i]);
			if (e[i] > e[i + 1])
			{
				int x = e[i + 1];
				e[i + 1] = e[i];
				e[i] = x;
			}
		}
	}
}

//strlen
int my_strlen(char *a)
{
	int j = 0;
	int i = 0;
	while (*a!='\0')
	{
		a++;
		j++;
	}
	return j;
}

//���򣨵ݹ飩
void nx(char a[])//void nx(��������)
{
	int y = strlen(a);
	char v = 0;
	v = a[0];
	a[0] = a[y - 1];
	a[y - 1] = '\0';
	if(a[0]!='\0')
		nx(a + 1);

	a[y - 1] = v;

}

//����һ���������磺123�������1+2+3��6���ݹ�
int xxx(int a)
{
	int  i = 0;
	if (a > 9)
	{
		i = xxx(a / 10) + a % 10;//12+3
	}
	else if (a <= 9)
	{
		i += a;
	}
	return i;
}

//�����Լ�����ݹ飩
int cvb(int a, int b)
{
	int c = 0;
	if (b > a)
	{
		c = a;
		a = b;
		b = c;
	}
	if (b == 0)
	{
		return a;
	}
	else {
		return cvb(b, a % b);
	}
}

//����
void heart(void)
{
	int sss = 1;
	float x, y, a;
	for (y = 1.5; y > -1.5; y -= 0.1)
	{
		for (x = -1.5; x < 1.5; x += 0.05)
		{
			a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y<=0.0)
			{
				if (sss > 3)
					sss = 1;
				switch (sss%3)
				{
				case 1:
					putchar('W');
					break;
				case 2:
					putchar('J');
					break;
				case 0:
					putchar('H');
					break;
				}
				sss++;
			}
			else {
				putchar(' ');
			}
		}
		system("color 0c");
		putchar('\n');
	}
}