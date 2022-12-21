#include <iostream>
using namespace std;

int main () {
    char huruf;
    cout << "Masukkan Huruf";
    cin >> huruf;
    if (huruf >= 'a' && huruf <= 'z') {
        cout << huruf << " itu adalah huruf";
    }else if (huruf >= 'A' && huruf <= 'Z'){
        cout << huruf << " itu adalah huruf";
    }
    else {
        cout << "itu bukan huruf";
    }
}