#include <iostream>
using namespace std;
/*
    Program Gaji Normal dan Gaji Lembur
    Untuk menentukan gaji total
    By : Mustafid Kaisalana
    Tgl : 10 Okt 2022
*/

int main () {
    int jam, jamLembur, jamNormal, gajiNormal, gajiLembur, totalGaji;
    cout << "Masukkan Jam Kerja : ";
    cin >> jam;
    totalGaji = jam*150000;
    if (jam > 48) {
        jamLembur = jam-48;
        jamNormal = jam-jamLembur;
        gajiNormal = jamNormal * 150000;
        gajiLembur = jamLembur * 100000;
        totalGaji = gajiNormal + gajiLembur; 
    }
    cout << "Gaji Total : " << totalGaji << endl;
}
