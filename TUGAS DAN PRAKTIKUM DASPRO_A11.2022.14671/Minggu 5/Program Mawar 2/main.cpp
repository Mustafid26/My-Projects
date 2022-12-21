#include <iostream>
/*
PROGRAM UNTUK MEMVALIDASI BILANGAN
ABSOLUT BILANGAN KELIPATAN 5
BY:Evanza Kevin Abisha
TGL : 12 OKTOBER 2022
*/

using namespace std;

int main()
{
    int x;
    cout << "Masukkan Bilangan X : ";
    cin >> x;
    if (x<0) {
        x = x * -1;
        cout << x;
    }
    if ( x % 5 == 0) {
        cout << " Bilangan Kelipatan 5";
    }
    else {
        cout << " Bukan bilangan kelipatan 5" ;
    }
}
