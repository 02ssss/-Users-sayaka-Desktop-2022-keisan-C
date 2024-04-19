#include <stdio.h>
int main(void) {
    int x;
    printf("x=?");
    scanf("%d", &x);
    int h = x / 3600;
    int m = ( x - 3600 * h ) / 60;
    int s = x - 3600 * h - 60 * m;
    printf("%d時間%d分%d秒 \n" , h,m,s);
}
