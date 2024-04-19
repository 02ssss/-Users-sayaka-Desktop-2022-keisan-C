#include<stdio.h>
 #include<ctype.h>
 #include<string.h>
 int main(void) {
 int i;
 char st[100];
 printf("文字列を入力してください:");
 scanf("%s", st);
 int len = strlen( st );
 for (i=0; len>i; i++){
     if(isupper( st[i])!=0){
         putchar(st[i]);
     }
 }

 } 