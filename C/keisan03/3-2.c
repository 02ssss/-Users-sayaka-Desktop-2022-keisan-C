/*
floatだと32bitまでであるため桁あふれが生じるから。
*/

#include <stdio.h>
int main (void)
{  
    float a,b,c,d,s;
a= 100001,0;
b=0.123456;
c=0.111111;
d=-100000.0;

s=0.0;
s=s+a;
s=s+d;
s=s+b;
s=s+c;
    printf("%f \n" , s);
}