#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int jumlahbaris,jumlahkolom;
    cout << "Inputkan Baris : ";
    cin >> jumlahbaris;
    cout << "Inputkan Kolom : ";
    cin >> jumlahkolom;
    //DEKLARASI ARRAY 2D
    int X[jumlahbaris][jumlahkolom];
    //ALGORITMA
    for (int baris = 0; baris < jumlahbaris; baris ++){
        for(int kolom = 0; kolom < jumlahkolom; kolom ++){
            cout << "Input Nilai Baris- ";
            cout << baris << " Kolom ke- ";
            cout << kolom << " = ";
            cin >> X[baris][kolom];
        }
        cout << endl;
    }
    for (int baris = 0; baris < jumlahbaris; baris ++){
        for(int kolom = 0; kolom < jumlahkolom; kolom ++){
            cout << X[baris][kolom];
            cout << "\t";
        }
        cout << endl;
    }
}

