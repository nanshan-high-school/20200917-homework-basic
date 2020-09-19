#include <iostream>
using namespace std;
int main() {
   int num;
   cout<<"輸入數字";
   cin>>num;

   if (num %3==0) {
     cout<<"3的倍數";
   }
   else {
     cout<<"非3的倍數";
   }
}
