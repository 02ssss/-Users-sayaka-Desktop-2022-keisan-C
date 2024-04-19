#include <stdio.h>
#include <math.h>



struct complex {
  double re;  /* 実部 */
  double im;  /* 虚部 */
};

void printC(struct complex a){

if(a.im !=0){
    if(a.re!=0){
printf("%0.2f %+0.2f i\n", a.re, a.im);
 }else{
     printf("%0.2f i\n",a.im);
 }
 }
  else
printf("%0.2f \n",a.re);
}





struct complex addC(struct complex a, struct complex b){
  struct complex c;
  c.re = a.re + b.re;
  c.im = a.im + b.im;
  return c;
}


struct complex multC(struct complex a, struct complex b){
  struct complex c;

  c.re=a.re * b.re-a.im * b.im;
  c.im=a.re*b.im+b.re*a.im;
  return c;
}

struct complex conjC(struct complex a){
  struct complex c;
  c.re = a.re ;
  c.im = -a.im ;
  return c;
}


double  absC(struct complex a){
  double c;
  c=sqrt((a.re)*(a.re)+(a.im)*(a.im));
  return c;
}


struct complex divC(struct complex a, struct complex b){
  struct complex c,h;
 c=multC(a,conjC(b));
  h.re = c.re/(absC(b)*absC(b));
  h.im = c.im/(absC(b)*absC(b));
  return h;
}

int main(void) {
   struct complex c1, c2, sum, a1,a2,a6,a4;
   double a3,a5;
   scanf("%lf", &c1.re);
   scanf("%lf", &c1.im);
   scanf("%lf", &c2.re);
   scanf("%lf", &c2.im);
   sum = addC(c1, c2);
   a1 = multC(c1, c2);
  a2 = conjC(c1);
   a6 = conjC(c2);
  a3 = absC(c1);
  a5 = absC(c2);
 a4 = divC(c1, c2);

  printf("c1: "); printC(c1);
  printf("c2: "); printC(c2);
  printf("c1+c2: ");printC(sum);
  printf("c1*c2: ");printC(a1);
printf("c1共役: ");printC(a2);
printf("c2共役: ");printC(a6);
printf("|c1|: ");printf("%lf\n",a3);
printf("|c2|: ");printf("%lf\n",a5);
printf("c1/c2: ");printC(a4);

}