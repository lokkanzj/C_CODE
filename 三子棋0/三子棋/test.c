#include "game.h"//�����ղŴ�����ͷ�ļ� game.h

int main()
{
    int y = 0;
    srand((unsigned int)time(NULL));//������ɵ�
    do
    {
        menu();//��ӡ�˵�
        printf("������->");
        scanf("%d", &y);//��ȡ��ҵ�����
        switch (y)
        {
        case 1:
            game();//���������1��������Ϸ����game()
            break;
        case 0:
            break;//���������0��ѭ���ж�Ϊ�٣��˳���Ϸ
        default:
            printf("ѡ�����������ѡ��\n");//�������ķ�1Ҳ��0������ѡ��
            break;
        }
    } while (y);
}