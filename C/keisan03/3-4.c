#include <stdio.h>
int main (void)
{    
char ch;
int x;
    printf("x=?");
    scanf("%d" , &x);
    ch='a'+x-1;
printf("%d番目のアルファベットは%cです\n",x,ch);
}