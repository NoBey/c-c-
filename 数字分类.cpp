#include <iostream>
using namespace std;
int main() {

  int input;
  int A1[100];
  int A2[100];
  int A3[100];
  int A4[100];
  int A5[100];
  while (cin >> input)
  {
    cout << input << endl;

    if (input%10==0) {
       A1[sizeof(A1)]=input;
    }
    if(input%5==1){
      A1[sizeof(A2)]=input;
    }
    if(input%5==2){
      A1[sizeof(A3)]=input;
    }
    if(input%5==3){
      A1[sizeof(A4)]=input;
    }
    if(input%5==4){
      A1[sizeof(A5)]=input;
    }
  }

cout << "-----" << endl;
  return 0;
}
