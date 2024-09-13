# include <stdio.h>

int main ()
{
    int type;
    scanf("%d", &type);
    switch (type)
    //switch-case控制表达式只能是整数形结果
    {
    case 1:
     printf("再见");
        break;
    case 1+1: //常量可以是常数，也可以是常数计算的表达式
        printf("你好");
        break;
    default:
     printf("我们终将相遇，在那悠远的苍穹");
        break;
    }

    return 0;
}