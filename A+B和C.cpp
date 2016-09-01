#include <stdio.h>

char* max(a,b){return a>b?"true":"false";}
int T;
int A[100],B[100],C[100];
int main() {
  scanf("%d\n", &T);
  for (int i = 0; i < T; i++) {
    scanf("%d %d %d", &A[i], &B[i], &C[i] );
  }
  for (int i = 0; i < T;  i++) {
    printf("Case #%d: %s\n", (i+1), max((A[i]+B[i]), C[i]));
  }
  return 0;
}
