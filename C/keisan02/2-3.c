#include <stdio.h>
int main(void) {
    int x;
    printf("x=?");
    scanf("%d", &x);
     int r = x / 10;
     int s = r % 10; 
    printf("%dの10の位の値は%dです \n", x,s);
}