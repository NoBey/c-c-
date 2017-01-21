#include <iostream>

using namespace std;

class List
{
   private:
      void *Data;
   public:
      void initList(L){
        Data=L;
        return Data;
      };
};


int main() {
  /* code */
  List a;
  int s = 1;

  cout << "----" << a.initList(&s) << endl;
  return 0;
}
