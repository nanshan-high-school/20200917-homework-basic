#include <iostream>
using namespace std;

int main() {
    //輸出
    cout << "Please input a number: ";
    
    //輸入數字
    int num;
    cin >> num;
    
    //判斷三的倍數
    if (num % 3 == 0) {
        cout << num << "為3的倍數";
    } else {
        cout << num << "不為3的倍數";
    }
}
