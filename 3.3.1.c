# include <stdio.h>

int main()

{
    int price = 0;
    int bill = 0;

    printf("请输入金额");
    scanf("%d", &price);
    printf("请输入票面");
    scanf("%d", &bill);
    
    if ( bill >= price)
       { printf("应该找您：%d元", bill - price); }
    else {printf("你的金额不足");}


    return 0;
}