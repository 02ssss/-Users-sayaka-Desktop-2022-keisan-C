#include <stdio.h>
int main(void){
    int n,i,j;
    printf("ｎを入力してください");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}