#include <stdio.h>
#include <math.h>


double taylor_e_r(double x, int n){
 int k,s,i;
 double sum=1;
 double y;
 y=1;

 if(n==0){
     return 1;
 }else {
    sum= taylor_e_r( x, n-1);
     for(i=1; i<=n ;i++){
    y=y*(x/i);
}

    sum=sum+y;
 return sum;
}

}

int main(void){
 double error;
double x;
int k;
 for(k=0; k<=20 ;k++){
    x =taylor_e_r(2.0,k);
   printf("%d  %lf  %e\n",k,x, fabs(x-exp(2.0)));
}
}
