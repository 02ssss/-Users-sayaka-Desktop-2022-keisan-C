#include <stdio.h>
int sum(int n){
int s=0;
int j;
for(j=1;j<=n;j++){
    s=s+j;
}
return s;
}
int main(void){
    int x;
printf("正整数xを入力してください\n");
scanf("%d",&x);
printf("%d",sum(x));

}