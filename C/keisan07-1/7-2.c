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

int main(void){
int m;
int l;
printf("非負整数mを入力してください\n");
scanf("%d",&m);

printf("非負整数lを入力してください\n");
scanf("%d",&l);
printf("%d",sod(m,l));
}
