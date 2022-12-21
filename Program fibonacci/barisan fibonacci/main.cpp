#include <iostream>

using namespace std;

int main()
{
    int baris, ke_1 = 0, ke_2 = 1, barislanjut = 0;
    cout << "Masukkan Jumlah Baris : ";
    cin >> baris;

    for (int i = 1; i<=baris; i++){
        if (i == 1){
            cout << ke_1 << ", ";
            continue;
        }
        if (i == 2){
            cout << ke_2 << ", ";
            continue;
        }
        barislanjut = ke_1 + ke_2;
        ke_1 = ke_2;
        ke_2 = barislanjut;
        cout << barislanjut << ", ";
    }
    return 0;
}
