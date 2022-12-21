#include <iostream>

using namespace std;

int main()
{
    int jam, total_gaji, gajiNormal, gajiLembur, jamLembur, jamNormal;

    cout << "Masukkan Jumlah Jam Kerja : ";
    cin >> jam;

    if ((jam > 48)) {
        jamLembur = jam - 48;
        jamNormal = jam - jamLembur;
        gajiNormal = jamNormal * 150000;
        gajiLembur = jamLembur * 100000;
        total_gaji = gajiNormal + gajiLembur;
        cout << total_gaji << " adalah Gaji Anda" << endl;
    }
    gajiNormal = jam * 150000;
    cout << gajiNormal << " adalah Gaji Anda" << endl;
    cout << "Cek Selesai" << endl;

    return 0;
}
