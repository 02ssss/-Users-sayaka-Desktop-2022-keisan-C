#include <stdio.h>
int main(void) {
    int h ,m , s;
    printf("h=?");
    scanf("%d" , &h);
    printf("m=?");
    scanf("%d" , &m);
    printf("s=?");
    scanf("%d" , &s);

    int x = 3600*h + 60*m + s;
    printf("合計は%d秒 \n" , x);
}