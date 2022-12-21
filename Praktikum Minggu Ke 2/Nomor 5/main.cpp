#include <iostream>

using namespace std;

int main()
{
    int jarijari,tinggi,kelilingalas,luas,volumetabung;
    jarijari = 14;
    tinggi = 20;
    kelilingalas = 2*3.14*jarijari;
    luas = 2*3.14*jarijari*jarijari;
    volumetabung = 3.14*jarijari*jarijari*tinggi;

    cout << "Program Mencari Kelilng Alas, Luas, dan, Volume Tabung" << endl;
    cout << "======================================================" << endl;
    cout << "Jari-Jari = 14" << endl;
    cout << "Tinggi = 20" << endl;
    cout << "======================================================" << endl;
    cout << "Keliling Alas = " << kelilingalas << endl;
    cout << "Luas = " << luas << endl;
    cout << "Volume = " << volumetabung << endl;
}
