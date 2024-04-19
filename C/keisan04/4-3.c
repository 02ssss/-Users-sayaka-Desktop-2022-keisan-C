#include <stdio.h>
#include <math.h>
int main(void){
int i;
int n;
int a[5];

printf("サイズ5のベクトルを入力してください");



for(i=0;i<=4;i++){
    scanf("%d",&a[i]);
}
int b[5];

printf("整数を入力してください");
scanf("%d",&n);
for(i=0;i<=4;i++){
    b[i]=n*a[i];
}

for(i=0;i<=4;i++){
    printf("%d ",b[i]);
}
printf("\n");
}