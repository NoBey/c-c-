#include <iostream>
using namespace std;


char* max1(int a, int b){
  char s1[]="true";
  char s2[]="false";

  return a>b? s1 : s2 ;
};
int T;
int A[100],B[100],C[100];
int main() {
  cin >> T;//scanf("%d\n", &T);

  for (int i = 0; i < T; i++) {
    cin >> A[i] >> B[i] >> C[i]; //scanf("%d %d %d", &A[i], &B[i], &C[i] );
  }
  for (int i = 0; i < T;  i++) {
    cout << "Case #" << i+1 << ": " << max1((A[i]+B[i]), C[i]) << endl;
    //printf("Case #%d: %s\n", (i+1), max((A[i]+B[i]), C[i]));
  }
  return 0;
}
