#include <stdio.h>
#include <math.h>
int main(void) {

    int x,y;
    int sum;
    int i;

    printf("x=?");
    scanf("%d" , &x);

    printf("y=?");
    scanf("%d" , &y);
    
int d;
if(x>y){

d=x-y;

 for(i=0; i<=d ;i++){
      sum=sum+y+i;
    }
}

else if (y>x){
    
d=y-x;


 for(i=0; i<=d ;i++){
      sum=sum+x+i;
    }
}
else{sum=x+y;}

    printf("%d \n" , sum);
}