/*
コンピューターは２進数が使われており、２の２０乗は２進数で簡単に表せるが、
0.00001は２進数にすると小さい誤差が出るためそれを多くかけると影響が大きくなる。
*/
#include <stdio.h>
#include <math.h>
int main(void) {
float x;
long i;
x = 0.0;
for (i=0;i<1048576;i++){
x=x+1.0/1048576.0;
}
printf("i=%d, x=%10.7f,|error|=%10.7f\n",i ,x,fabs(1.0-x));
}