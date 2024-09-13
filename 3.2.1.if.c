#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;

    printf("请输入开始时间(参考格式12点30为12 30)");
    scanf("%d %d", &hour1,&minute1);
    printf("请输入结束时间(参考格式12点30为12 30)");
    scanf("%d %d", &hour2,&minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;
    if ( im < 0 ) { ih = ih - 1;
                    im = im + 60;
                     };
    //if语句判断（）中的条件成立，{}中的东西执行；
    
    printf("时间差是%d小时%d分钟\n", ih, im );

    return 0;
}