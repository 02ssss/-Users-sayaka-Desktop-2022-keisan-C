#include <stdio.h>
int count(int a[],int p,int n){
int i;
int j;
j=0;
for(i=0;i<n;i++)
if(a[i]>=p){
    j++;
}
return j;
}

int main(void){
int a[10];
int i;
printf("点数を入力してください\n");
for(i=0;i<10;i++){
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
printf("%d",count(a,80,10));
}
