/*
    PROGRAM GENAP LEBIH DARI 2
    Ket : Program utk cek bilangan genap lebih dari 2
    By : Kai
    Tgl : 5 Oktober 2022
*/
#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bilangan ;

    //ALGORITMA
    cout << "Masukkan bilangan : ";
    cin >> bilangan;

    if ( (bilangan % 2 == 0) && (bilangan>2) )
    {
            cout<<bilangan<< " adalah bilangan genap lebih dari 2";
            cout<<endl;
            }else {
                cout << "Bukan Bilangan Genap" << endl;
            }

    cout <<"Cek Selesai";
    return 0;
}
