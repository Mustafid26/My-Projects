#include <iostream>

using namespace std;

int main()
{
    //operand
    float angka1 = 19;
    float angka2 = 15;
    int hasil;
    hasil = (81-66) * 2 - (angka1-angka2) - 10 + 10 * 20 + 30;
    cout << "Hasilnya Adalah = " << hasil << endl;
    //hasil relasi
    bool hasil_relasi;
    cout << "===============" << endl;
    hasil_relasi = -100 > 3 < 4;
    cout << "Hasil relasi = " << hasil_relasi << endl;
    cout << "===============" << endl;
    //hasil logika
    bool hasil_logika;
    hasil_logika = (false && true) ^ true || (100 < 90 ) && (!false) ^ (90==90);
    cout << "Hasil Logika = " << hasil_logika << endl;
    cout << "===============" << endl;
    //ekspresi aritmatika
    int i = 1, j;
    //j = ++i;
    j = i++;
    cout << "Nilai i  = " << i << endl;
    cout << "Nilai j = " << j << endl;
    //program sequential
    int i;
    float x;
    int hasil;

    cin >> i ;
    x = 12.5;
    hasil = i * 10;
    cout << i << endl;
    cout << (x+5.4) << endl;
    cout << i << x << hasil << endl;

    //program persegi panjang
    float p, l, hasilKeliling, hasilLuas;
    cout << "Masukkan Panjang = " << endl;
    cin >> p ;
    cout << "Masukkan Lebar = " << endl;
    cin >> l;
    hasilKeliling = 2 * (p+l);
    hasilLuas = p*l;
    cout << "Hasil Keliling = " << hasilKeliling << endl;
    cout << "Hasil Luas = " << hasilLuas << endl;
}

