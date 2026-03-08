#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "num: ";
    cin >> num;

    if (num % 3 == 0) {
        cout << "NUM 等於三的倍數\n";
        cout << "num == " << num;
    } else {
        cout <<"NUM 不等於三的倍數";
    }
}

