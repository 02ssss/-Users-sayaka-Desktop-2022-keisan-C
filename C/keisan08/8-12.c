#include <stdio.h>

int divisible(int n,int i){
if(n%i==0){
return 1;
}else{
return 0;
}
}


int sod(int n,int k){
int s=0;
int j;

for(j=1;j<=k;j++){
if(divisible(n,j)==1){
   
    s=s+j;
}
}
return s;
}

int is_prime(int a){
    if(sod(a,a)==a+1){
       return 1;
    }else{
       return 0;
    }
}

int next_prime_r(int b){
    b++;
    if(is_prime(b) == 0){
        return  next_prime_r(b);
    }else{
        return b;
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
printf("n=?\n");
scanf("%d",&n);
printf("素数ならば１、そうでないならば０\n%d\n最小の素数は%d\n",is_prime(n),next_prime_r(n));

}