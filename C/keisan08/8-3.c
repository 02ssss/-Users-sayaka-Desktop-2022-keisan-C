#include <stdio.h>
int ack(int m ,int n){
    if(m==0)
    return n+1;

    if(m>0){
        if(n==0){
    return ack(m-1,1);
    }

 else if(n>0){
    return ack(m-1,ack(m,n-1));
 } 
}

}
int main(void){
int m;
int n;
printf("非負整数mを入力してください\n");
scanf("%d",&m);

printf("非負整数nを入力してください\n");
scanf("%d",&n);

if(m<0)
printf("非負整数を入力してください\n");
if(n<0)
printf("非負整数を入力してください\n");
else
printf("%d\n",ack(m,n));
}

