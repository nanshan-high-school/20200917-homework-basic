#include <iostream>
using namespace std;

int main(){
    int inputnum;
    
    while (cin >> inputnum) {
        if (inputnum % 3 == 0) {
            cout << "是三的倍數";
        } else {
            cout << "非三的倍數";
        }
    }
}

