#include <stdio.h>
int max_of_r(int a[],int i){
int p;
if(i==0){
return a[0];
}
if(i>=1){
    p=max_of_r(a,i-1);
    if(a[i]<p){
        return p;
    }
     else {
     return a[i];
     }
}
    
}


int main(void){
int a[10];
int i;
printf("点数を入力してください\n");
for(i=0;i<10;i++){
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
printf("%d",max_of_r(a,9));
}
