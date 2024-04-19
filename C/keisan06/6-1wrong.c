
 #include <stdio.h>
 int main(void) {
 int a, b, c;
 printf("3 つの整数を入力してください．\n");
 scanf("%d%d%d", &a, &b, &c);
 int r = a;
 if (b > r) {
 r = b;
 }else if (c > r) { r = c;
 }
 printf("最大は%d です．\n", r);
 } 