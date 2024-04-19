#include <stdio.h>
int main(void){
    int n,i,j;
    printf("ｎを入力してください");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        
        for(j=n;j>i;j--){
            printf(" ");
        }

        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}