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



void sort3(int *pn1, int *pn2, int *pn3){
    sort2(pn2, pn3);
  sort2(pn1, pn3);
  sort2(pn1, pn2);
}


int main(void)
{
int a;
printf("pn1 =");
scanf("%d",&a);


int b;
printf("pn2 =");
scanf("%d",&b);

int c;
printf("pn3 =");
scanf("%d",&c);


sort3(&a,&b,&c);
printf("%d,%d,%d",a,b,c);
}

