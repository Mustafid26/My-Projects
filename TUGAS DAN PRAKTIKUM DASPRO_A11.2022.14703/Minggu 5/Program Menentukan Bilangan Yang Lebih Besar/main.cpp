#include <iostream>
/*
PROGRAM MENENTUKAN BILANGAN LEBIH BESAR
{untuk menentukan mana yang lebih besar}
by : Mustafid Kaisalana
tgl : 12 OKT
*/

using namespace std;

int main()
{
    int x,y;
    cout << "Masukkan Bilangan X : " ;
    cin >> x;
    cout << "Masukkan Bilangan Y : ";
    cin >> y;
    if (x>=y) {
        cout << x << " Lebih Besar";
    }
    else {
        cout << y << " Lebih Besar";
    }
}
