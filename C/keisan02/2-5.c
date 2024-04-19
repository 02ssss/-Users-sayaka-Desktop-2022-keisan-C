#include <stdio.h>
#include <math.h>
int main(void) {

    double b,n;
    printf("b=?");
    scanf("%lf" , &b);

    printf("n=?");
    scanf("%lf" , &n);

    double s = log(n)/log(b);
    printf("%lf \n" , s);
}