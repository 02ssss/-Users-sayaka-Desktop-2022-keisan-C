#include <stdio.h>
#include <string.h>
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

Student search(Student a[],int num,char *target){
    Student s;
    int k;
    s=a[0];
    for(k=0;k<num;k++){
    if (strcmp(target,a[k].name)==0){  
        s=a[k] ;

}
}
return s;
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


b=search(a,num,"Judy");
printf("Judy:%03d,%d,%d\n",b.code,b.math,b.eng);

b=search(a,num,"Steve");
printf("Steve:%03d,%d,%d\n",b.code,b.math,b.eng);

b=search(a,num,"Wendy");
printf("Wendy:%03d,%d,%d\n",b.code,b.math,b.eng);

}
