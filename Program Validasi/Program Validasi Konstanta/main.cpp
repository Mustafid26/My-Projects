#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bilangan;
    const int x = 10;

    //ALGORITMA
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    if (bilangan > x)
    {
        cout << bilangan << " Bilangan Tersebut Lebih Besar Dari " << x;
        cout << endl;
    }
    cout << "Cek Selesai" << endl;
    return 0;
}
