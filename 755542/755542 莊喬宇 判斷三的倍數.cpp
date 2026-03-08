#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "請輸入數字:\n";
    cin >> num;

    if (num % 3 == 0) {
        cout << num << "是3的倍數。\n";
    } else {
        cout << num << "不是3的倍數。\n";
    }
}
