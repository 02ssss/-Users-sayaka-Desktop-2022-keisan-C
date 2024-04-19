 #include <stdio.h>
 int main(void) {
 int a, b, c;
 printf("3 つの整数を入力してください．\n");
 scanf("%d%d%d", &a, &b, &c);
 int r;
 if (a<b&&b<c||c<b&&b<a) {
 r = b;
 }
 else if (b<a&&a<c||c<a&&a<b) { r = a;
 }
 else{r=c;

 }
 printf("真ん中の値は%d です．\n", r);
 } 