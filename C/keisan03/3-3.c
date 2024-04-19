#include <stdio.h>
#include <math.h>
int main (void)
{ int a,b,c ;

  printf("a=?");
    scanf("%d" , &a);
    printf("b=?");
    scanf("%d" , &b);
    printf("c=?");
    scanf("%d" , &c);

    int d;
    d=b*b-4*a*c;
    if(d>0){
    printf("%dx^2+%dx+%d=0の実数解の個数は2です \n" , a,b,c);
}
else if(d==0){
    printf("%dx^2+%dx+%d=0の実数解の個数は1です \n" , a,b,c);

}else{

    printf("%dx^2+%dx+%d=0の実数解の個数は0です \n" , a,b,c);
}
}