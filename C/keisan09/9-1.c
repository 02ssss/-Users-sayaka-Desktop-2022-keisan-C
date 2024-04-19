#include <stdio.h>
void adjust_point(int *pn)
{

if(*pn<0)
*pn=0;
if(*pn>100)
*pn=100;
return;
}

int main(void)
{
int a;
printf("x =");
scanf("%d",&a);
adjust_point(&a);
printf("%d",a);
}


