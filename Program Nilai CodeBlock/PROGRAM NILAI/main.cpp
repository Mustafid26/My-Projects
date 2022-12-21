#include <iostream>

using namespace std;

int main()

{
    //kamus
    char Nama;
    int NIM, NilaiTugas,NilaiMid,NilaiUas,NilaiAkhir;


    //algoritma

    cout << "Masukkan NIM :";
    cin>> NIM;
    cout << "Masukkan Nama :";
    cin>> Nama;
    cout << "Masukkan Nilai Tugas :";
    cin >> NilaiTugas;
    cout << "Masukkan Nilai Mid :";
    cin >> NilaiMid;
    cout << "Masukkan Nila Uas :";
    cin >> NilaiUas;
    NilaiAkhir =((30/100 * NilaiTugas) + (35/100 * NilaiMid) + (35/100 * NilaiUas));

    if (NilaiAkhir > 100 && NilaiAkhir < 85){
        cout << " Maka Mahasiswa Nilai Huruf A dan Status Lulus " << endl;
    }
    else {
        cout << " Mahasiswa Tidak Lulus ";}

    return 0;
}
