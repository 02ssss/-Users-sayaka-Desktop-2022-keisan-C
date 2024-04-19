#include <stdio.h>
void sort2(int *pn1, int *pn2)
{
    if(*pn1>*pn2){
int p;
p=*pn1;
*pn1=*pn2;
*pn2=p;
}
}

int main(void)
{
int a;
printf("pn1 =");
scanf("%d",&a);


int b;
printf("pn2 =");
scanf("%d",&b);


sort2(&a,&b);
printf("%d,%d",a,b);
}


