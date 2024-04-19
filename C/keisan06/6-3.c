
 #include <stdio.h>
 int main(void) {
 int y;
 printf("年を入力してください．\n");
 scanf("%d", &y);

if(y%100==0&&y%400!=0){
printf("平年\n");
}

else if(y%4==0){
printf("うるう年\n");
}

else{
    printf("平年\n");
}
 }