#include <stdio.h>
int main(void){
int i,j,n,k;
printf("n=?");
scanf("%d",&n);
printf("k=?");
scanf("%d",&k);
int a[n+1][n+1];
a[0][0]=1;
for(j=1;j<=n+1;j++){
    a[0][j]=0;
}
for(i=1;i<=n+1;i++){
for(j=1;j<=n+1;j++){
if(j>i){
a[i][j]=0;
}
if(j==0){
a[i][0]=1;
}
else{
a[i][j]=a[i-1][j-1]+a[i-1][j];
}
}
}
printf("%d",a[n][k]);
}