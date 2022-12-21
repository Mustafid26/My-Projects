#include <iostream>
/*
Program untuk mengetahui gaji seorang karyawan
By: Dhia Tawakalna
NIM: A11.2022.14675
TGL:18 Oktober 2022
*/
using namespace std;

int main()
{
    //Kamus
    int tahun;

    //Algoritma
   cout << "Masukan tahun masehi : ";
   cin >> tahun;
   if (tahun % 400 == 0){
    cout << tahun << " adalah tahun kabisat" << endl;
   }else if ((tahun % 400 !=0)&&(tahun % 100 ==0)){
   cout << tahun << " adalah bukan tahun kabisat" << endl;
   }else if ((tahun % 400 !=0)&& (tahun % 100 !=0)) {
        if (tahun % 4 == 0){
            cout<< tahun << " adalah tahun kabisat" << endl;
        }else {
            cout<< tahun << " adalah bukan tahun kabisat"<< endl;
        }
   }else {
    cout << tahun << " adalah bukan tahun kabisat"<< endl;
   }
    return 0;
}
