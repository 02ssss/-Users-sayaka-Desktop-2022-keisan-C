#include <stdio.h>
#include <math.h>
int main (void)
{ int a,b,c ;

  printf("a=?");
    scanf("%d" , &a);
    printf("b=?");
    scanf("%d" , &b);
    printf("c=?");
    scanf("%d" , &c);

    double s = (a+b+c)/2.0;
    double S =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("S=%lf \n" , S);
}