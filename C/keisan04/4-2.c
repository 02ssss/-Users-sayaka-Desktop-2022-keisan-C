#include <stdio.h>
#include <math.h>
int main(void)
{ int i;
int n;
int x=1;

printf("n=?");
scanf("%d",&n);

for(i=1;i<=n;i++){
x=x*2;
}
printf("答え:%d\n",x);
}