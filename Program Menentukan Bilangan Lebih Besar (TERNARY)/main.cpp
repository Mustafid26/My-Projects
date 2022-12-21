#include <iostream>
/*
PROGRAM MENENTUKAN BILANGAN LEBIH BESAR TERNARY
{untuk menentukan mana yang lebih besar}
by : Mustafid Kaisalana
tgl : 12 OKT
*/

using namespace std;

int main()
{
    int x,y;
    string hasil;
    cout << "Masukkan Bilangan X : ";
    cin >> x;
    cout << "Masukkan Bilangan Y : ";
    cin >> y;
    hasil = (x>=y)? " lebih besar ": " lebih kecil ";
    cout << x << " yang " << hasil;
}
