#include <stdio.h>

int str_length(char *st,char c) {
int k = 0;

while (*st != '\0') {
if(*st==c)
  k++;
st++;
}
return k;
}


int main(void) {
char st[100];

printf("文字を入力してください:");
char c=getchar();


printf("文字列を入力してください:");
scanf("%s", &st);

printf("%sの%cの数は%d です．\n", st, c,str_length(st,c) );
} 