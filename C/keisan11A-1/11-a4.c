#include <stdio.h>

typedef struct rational {
int num; /* 分子 numerator */
int denom; /* 分母 denominator */
} Rational;


int gcd(int a ,int b){ 
    if(a==0){
     return b;
      }
      if(b==0){
     return a;
      }
    if(a!=b){
        int r;
        r=b%a;
    return gcd(r,a);
    }
    if(a==b){   
    return a;
    }
}

int lcm(int a ,int b){ 
    if(a==0){
     return b;
      }
      if(b==0){
     return a;
      }
    if(a!=b){
    int r=gcd(a,b);
    return a*b/r;
    }
    if(a==b){   
    return a;
    }
}


void reduce(Rational* r){
    int x;
    x=gcd(r->num,r->denom);
    r->num=r->num/x;
    r->denom=r->denom/x;
}

Rational mult_rat(Rational r1,Rational r2){
Rational mult;
mult.num=r1.num*r2.num;
mult.denom=r1.denom*r2.denom;
reduce(&mult);
return mult;
}

Rational add_rat(Rational r1,Rational r2){
Rational sum;
sum.denom=lcm(r1.denom,r2.denom);
sum.num=r1.num*sum.denom/r1.denom+r2.num*sum.denom/r2.denom;
reduce(&sum);
return sum;
}





int main(void){
Rational r1,r2,r3,r4;
printf("a=?");
scanf("%d",&r1.num);
printf("b=?");
scanf("%d",&r1.denom);
printf("c=?");
scanf("%d",&r2.num);
printf("d=?");
scanf("%d",&r2.denom);

r3= mult_rat(r1,r2);
r4= add_rat(r1,r2);

if(r4.denom!=1  && r3.denom==1){
printf("積は%d, 和は%d/%d\n",r3.num,r4.num,r4.denom);
}

if(r3.denom!=1 && r4.denom==1){
printf("積は%d/%d, 和は%d\n",r3.num,r3.denom,r4.num);
}

if(r3.denom==1 && r4.denom==1){
printf("積は%d, 和は%d\n",r3.num,r4.num);
}

else if(r3.denom!=1 && r4.denom!=1){ 
printf("積は%d/%d, 和は%d/%d\n",r3.num,r3.denom,r4.num,r4.denom) ;
}
}
