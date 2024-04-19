#include <stdio.h>

typedef struct student {
  int code;
  char name[100];
  int math;
  int eng;
} Student;

void read_student(Student *s) {
      scanf("%d", &s->code );
      scanf("%s", s->name);
      scanf("%d", &s->math);
      scanf("%d", &s->eng);
}

Student max_eng(Student a[],int num){
    int k,m;
    int l=0;
    for(k=0;k<num;k++){
    if(l<a[k].eng){
    l=a[k].eng;
    m=k;
    }
}return a[m];
}

double ave_math(Student a[],int num,int b){
    int k,l,sum;
    double ave;
    l=0;
    sum=0;
for(k=0;k<num;k++){
    if(a[k].eng >= b){
    sum=sum+a[k].math;
    l++;
    }
}
ave=(double)sum/l;
return ave;
}

int main(void) {
   int num, i,d;
   Student b;
   double c;
   /* 人数を指定 */
   scanf("%d", &num);
   /* num個のStudent型構造体を宣言 */
   Student a[num];
   /* num個のStudent型構造体に情報を入力 */
   for (i = 0; i < num; i++) {
      read_student(&a[i]);
   }
   /* num個のStudent型構造体の情報を表示 */
   for (i = 0; i < num; i++) {
      printf("%03d\t", a[i].code);
      printf("%s\t", a[i].name);
      printf("%d\t", a[i].math);
      printf("%d\n", a[i].eng);
    

   }
b=max_eng(a,20);
printf("英語が最高の学生；%03d %s %d %d\n",b.code,b.name,b.math,b.eng);
scanf("%d",&d);
c=ave_math(a,20,50);
printf("英語が50点以上の生徒の数学の平均点:%lf\n",c);

}