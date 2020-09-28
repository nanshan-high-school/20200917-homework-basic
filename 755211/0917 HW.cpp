#include <iostream>
using namespace std;

int main () {
  int num;
  cin >> num;
  cout << "輸入數字：";
  if (num % 3 == 0){
    cout << "這是三的倍數";
    } else {
   cout << "這不是三的倍數";
  }
}
