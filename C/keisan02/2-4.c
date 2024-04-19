#include <stdio.h>
#include <math.h>
int main(void) {

    double x,y;
    printf("x=?");
    scanf("%lf" , &x);
    printf("y=?");
    scanf("%lf" , &y);
    double u,v;
    printf("u=?");
    scanf("%lf" , &u);
    printf("v=?");
    scanf("%lf" , &v);

    double r = pow((u-x),2)+pow((v-y),2);
    double s = sqrt(r);
    printf("2点間のユークリッド距離は%lf \n" , s);
}