#include <iostream>

using namespace std;

int main()
{
    char huruf;
    cout << "Masukkan Huruf : ";
    cin >> huruf;

    if (huruf>='a' && huruf<='z'){
        cout << huruf << " ini adalah huruf";
    }else if (huruf>='A' && huruf<='Z'){
        cout << huruf << " ini adalah huruf";
    }
    else {
        cout << huruf << " ini bukan huruf";
    }
}
