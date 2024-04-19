#include <stdio.h>
#include <math.h>

double taylor_e(double x, int n){
 int k,s;
 double sum=1;
 double y;
 y=1;
 for(k=1; k<=n ;k++){


    y=y*(x/k);
    sum=sum+y;
}



 return sum;
}

int main(void){
 double error;
double x;
int k;
 for(k=0; k<=20 ;k++){
    x =taylor_e(2.0,k);
   printf("%d  %lf  %e\n",k,x, fabs(x-exp(2.0)));
}

}