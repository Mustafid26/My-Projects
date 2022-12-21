#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int jumlahbaris,jumlahkolom,jumlahdalam;
    cout << "Inputkan Baris , Kolom, Kedalaman : ";
    cin >> jumlahbaris >> jumlahkolom >> jumlahdalam;
    int X[jumlahbaris][jumlahkolom][jumlahdalam] = {};
    //ALGORITMA
    //CETAK ARRAY 3D
    for (int baris = 0; baris < jumlahbaris; baris ++){
        for (int kolom = 0; kolom < jumlahkolom; kolom++){
            for (int dalam = 0; dalam < jumlahdalam; dalam ++){
                cout << "Input Nilai Baris - ";
                cout << baris << " Kolom ke - ";
                cout << kolom << " Kedalaman ke - ";
                cout << dalam << " = ";
                cin >> X[baris][kolom][dalam];
            }
        }
        cout << endl;
    }
    for (int baris = 0; baris < jumlahbaris; baris ++){
        for (int kolom = 0; kolom < jumlahkolom; kolom++){
            for (int dalam = 0; dalam < jumlahdalam; dalam ++){
                cout << X[baris][kolom][dalam];
                cout << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
}
