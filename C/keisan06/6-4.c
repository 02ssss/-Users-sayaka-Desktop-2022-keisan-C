
#include <stdio.h>
int main(void){
int i,r;
int x[10];
 printf("１０個の整数を入力してください．\n");
for(i=0;i<10;i++){
        scanf("%d",&x[i]);
     }
 r=x[0];
for(i=0;i<10;i++){
  if(r<x[i]){
      r=x[i];
  }
}

printf("最大は%d\n",r);
}

