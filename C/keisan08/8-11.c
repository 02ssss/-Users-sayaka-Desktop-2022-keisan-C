#include <stdio.h>

int divisible(int n,int i){
if(n%i==0){
return 1;
}else{
return 0;
}
}



int sod_r(int n,int k){
if(k==1){
  return 1;
}
if(divisible(n,k)==1){
   
    return k+sod_r(n,k-1);
} else {
return sod_r(n,k-1);
}

}

int main(void){
int n;
int k;
printf("非負整数nを入力してください\n");
scanf("%d",&n);

printf("非負整数kを入力してください\n");
scanf("%d",&k);
printf("%d",sod_r(n,k));
}


