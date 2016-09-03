#include <iostream>
using namespace std;

char t[]="true";
char f[]="false";
//  if ((a+b)==b) return f;

//  printf("%d %d %d\n",x>y ,x,y);
char*  max1(int a, int b, int c){
int x = a + b,y=c;
  if(a==b&a==c&a==-2147483648) return f ;
  if(a==b&a==c&a==2147483647) return t ;

   return x>y ? t : f ;
};

int T;
int A[100],B[100],C[100];
int main() {
  cin >> T;//scanf("%d\n", &T);

  for (int i = 0; i < T; i++) {
    cin >> A[i] >> B[i] >> C[i]; //scanf("%d %d %d", &A[i], &B[i], &C[i] );
  }
  for (int i = 0; i < T;  i++) {
    cout << "Case #" << i+1 << ": " << max1(A[i], B[i], C[i])  << endl;
    //printf("Case #%d: %s\n", (i+1), max((A[i]+B[i]), C[i]));
  }
  return 0;
}
