#include <stdio.h>

int main(void){
int n,i,j,k;
int sum=0;

printf("n=?");
    scanf("%d" , &n);


for(i=1;i<=n;i++){  
for(j=i;j<=n;j++) 
for(k=j;k<=n;k++)
if(k*k==j*j+i*i){  
printf("%d %d %d\n",i,j,k);
sum=sum+1;
}

}

printf("合計%d個\n",sum);
}