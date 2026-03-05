#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "輸入一個整數:";
    cin >> num;
    if (num % 3 == 0) {
        cout << "這是3的倍數";
    } else {
        cout  << "這不是3的倍數";
    }
}
