#include <stdio.h>
#include <math.h>
int main(void){
double x;
int i;
for(i=0;i<=180;i=i+5){
   x=i*M_PI/180;
   printf("sin%d=%lf\n",i,sin(x));

}

for(i=0;i<=180;i=i+5){
   x=i*M_PI/180;
    printf("cos%d=%lf\n",i,cos(x));
}
printf("\n");
}