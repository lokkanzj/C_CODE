#include "game.h"//包含刚才创建的头文件 game.h

int main()
{
    int y = 0;
    srand((unsigned int)time(NULL));//随机生成点
    do
    {
        menu();//打印菜单
        printf("请输入->");
        scanf("%d", &y);//读取玩家的输入
        switch (y)
        {
        case 1:
            game();//如果输入是1，进入游戏函数game()
            break;
        case 0:
            break;//如果输入是0，循环判断为假，退出游戏
        default:
            printf("选择错误，请重新选择\n");//如果输入的非1也非0，重新选择
            break;
        }
    } while (y);
}