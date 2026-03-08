#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "請輸入一個數字\n";
    cin >> num;
    if(num % 3 == 0){
    cout << "你輸入的數字是三的倍數\n";
    } else{
    cout << "你輸入的數字不是三的倍數\n";
    }
}
