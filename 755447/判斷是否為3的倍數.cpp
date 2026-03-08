#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "num:";
    cin >> num;
    
    if (num%3==0){
        cout << "NUM是3的倍數\n";
        cout << "num == " << num;
    } else {
        cout << "NUM不是3的倍數";
    }
}

