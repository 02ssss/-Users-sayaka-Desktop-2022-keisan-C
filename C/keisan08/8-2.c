#include <stdio.h>
double power3_r(int n){

    if(n==0)
    return 1;

    if(n%2==0){
  double x;
    x=power3_r(n/2);
    return x*x;
    }
    else
    return 3*power3_r(n-1);
}


int main(void){
int n;
printf("非負整数を入力してください\n");
scanf("%d",&n);
if(n<0)
printf("非負整数を入力してください\n");
else
printf("%lf\n",power3_r(n));
}