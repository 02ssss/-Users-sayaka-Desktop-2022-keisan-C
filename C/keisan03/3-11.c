/*
aからｗまで入力できます。
*/

#include <stdio.h>
int main (void)
{    
char ch,ch2;

    printf("x=?");
    ch = getchar();
    ch2=ch+3;

printf("%cのシーザー暗号は%cです\n",ch,ch2);


}