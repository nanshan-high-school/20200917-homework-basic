#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "請輸入一個整數: ";
    cin >> num;
    printf("\n");
    if (num % 3 == 0) {
        cout << num << "是3的倍數";
    } else {
        cout << num << "不是3的倍數";
    }
}

