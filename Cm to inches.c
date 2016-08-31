#include <stdio.h>
 int main(int argc, char const *argv[]) {
  /* code */
  int cm;
  double feet,inches=0,x;
  scanf("%d", &cm);
  x = cm/30.48;
  inches = modf(x, &feet);
  printf("%d", (int)feet);
  if (inches!=0) {
    printf(" %d\n", (int)(inches*12));
  }
  return 0;
}
