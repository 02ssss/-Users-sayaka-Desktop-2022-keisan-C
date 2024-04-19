#include <stdio.h>


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


int main(void){
int a;
int b;
printf("非負整数aを入力してください\n");
scanf("%d",&a);

printf("非負整数bを入力してください\n");
scanf("%d",&b);

if(a<0)
printf("非負整数を入力してください\n");
if(b<0)
printf("非負整数を入力してください\n");
 if(a!=b)
printf("最大公約数%d,最小公倍数%d\n",gcd(a,b),lcm(a,b));
if(a==b)
printf("最大公約数%d,最小公倍数%d\n",a,a);


}
