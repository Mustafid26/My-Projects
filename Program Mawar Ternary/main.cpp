#include <iostream>
/*
PROGRAM UNTUK MEMVALIDASI BILANGAN
ABSOLUT BILANGAN KELIPATAN 5 TERNARY
BY: MUSTAFID KAISALANA
TGL : 12 OKTOBER 2022
*/

using namespace std;

int main()
{
    int x, absolut;
    string hasil;
    cout << "Masukkan Bilangan X : ";
    cin >> x;
    absolut = (x<0)? x = x * -1 : x;
    hasil = (x % 5 == 0)? " = bilangan kelipatan 5 ": " = bukan bilangan kelipatan 5 ";
    cout << x << hasil;
}
