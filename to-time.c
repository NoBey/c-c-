#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  /* code */
  char Time[100];
  char *timeip=&Time;
  int min;
  int hours;
  char tmp[];
  int lenth;
  scanf("%s %d", &Time, &min);
  printf("---%s---\n", Time);
  lenth = strlen(Time);
// if (lenth == 3) {
  // hours=(int)*(timeip);
  // tmp[0]=*(timeip+1);
  // tmp[1]=*(timeip+2);
  // printf("%s\n", tmp);
  // min=(int)tmp;
// }
// printf("%d %d\n", hours, min);

// for (int i = 1; i <=lenth; i++) {
//   /* code */
//   printf("-%d-\n", i);
//   printf("%c\n", *(timeip));
//   if((lenth-i) >= 2)
//   {
//     printf("ssssss");
//     strcat(tmp , *(timeip++));
//     printf("%s\n", tmp);
//   }else {
//     // strcat(tmp ,(char)*(timeip++));
//   }
// }


  printf("%d\n", lenth);

  return 0;
}
