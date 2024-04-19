#include <stdio.h>
int main(void){
    int i,j;
    int a[20];
    i=0;
    printf("値を入力して下さい\n");
    scanf("%d",&a[i]);
    while(a[i]>=0){
        i=i+1;
        scanf("%d",&a[i]);
    }

    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
     printf("\n");
}