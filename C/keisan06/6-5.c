 #include <stdio.h>
 #include <math.h>
 int main(void) {
 int a, b, c;
 double p,q;
 printf("3 つの整数を入力してください．\n");
 scanf("%d%d%d", &a, &b, &c);

double d=b*b-4*a*c;




if(a==0){
  if(b==0){
    if(c==0) {
      printf("不定\n");}
   else{ 
     printf("不能\n");
   }
  }else{
    p=-1.0*c/b;
    printf("実数解は%fです\n",p);
  }
}else if(d>0){
   p=(-b+sqrt(b*b-4*a*c))/(2*a);
   q=(-b-sqrt(b*b-4*a*c))/(2*a);

  printf("実数解は%f,%fです\n",p, q);
} else if(d==0){
    p=-b/(2*a);

    printf("実数解は%fです\n",p);
}else{
    printf("解なし\n");
}
 } 