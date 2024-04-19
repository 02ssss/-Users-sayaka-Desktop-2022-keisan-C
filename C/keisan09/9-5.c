#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
    int i;
    double t=0.0;
    double a[argc];
    for(i=0;i<argc;i++){
a[i]=atof(argv[i]);
}
    for(i=0;i<argc;i++){
t=a[i]+t;
    }
    printf("%lf",t);
}