#include <iostream>
/*Program Positif Negatif
(Program untuk cek bilangan bulat positif,negatif atau nol)
by: Dhia Tawakalna
TGl:14 oktober 2022
*/

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma

    cout << "Masukan Bilangan : ";
    cin >> bilangan;
    if (bilangan>0){
        cout << bilangan << " adalah bilangan positif";
    }else if (bilangan < 0){
    cout << bilangan << " adalah bilangan negatif";
    }else if(bilangan == 0 ) {
    cout << bilangan << " bilangan nol";
    }else {
    cout << "inputan salah";
    }
    return 0;
}
