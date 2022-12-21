#include <iostream>

using namespace std;

int main()
{
    int bilangan;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if (bilangan > 0) {
        cout << bilangan << " adl bil.positif";
    }else if (bilangan < 0){
        cout << bilangan << " adl bil.negatif";
    }else if (bilangan == 0){
        cout << " adl bil.nol";
    }
    else {
        cout << "Inputan Salah";
    }
    return 0;
}
