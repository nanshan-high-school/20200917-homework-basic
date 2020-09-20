#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number and I'll see if it's a multiply of 3\nYour number: ";
  int num;
  cin >> num;
  if (num % 3 == 0) {
    cout << num << " is a multiply of three";
  } else {
    cout << num << " is not a multiply of three";
  }
}
