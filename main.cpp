#include <iostream>
using namespace std;

int main() { 
    int n = 0; 

    cout << "輸入整數："; 
    cin >> n; 

    int remain = n % 2; 
    if(remain == 1) 
        cout << n << " 為奇數" << endl; 
    else 
        cout << n << " 為偶數" << endl; 

    return 0;
}