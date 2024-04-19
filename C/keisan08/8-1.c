#include <stdio.h>
int power3(int n){
    if(n<1)
    return 1;

    else
    return 3*power3(n-1);
}


int main(void){
int n;
printf("非負整数を入力してください\n");
scanf("%d",&n);
if(n<0)
printf("非負整数を入力してください\n");
else
printf("%d\n",power3(n));
}