#include <iostream>
/*
TUGAS
BY : MUSTAFID KAISALANA
TGL : 29 NOV 2022
*/
using namespace std;

int main (){
    int i,n,sum, prog;
    cout << "List Program : " << endl;
    cout << "1. Program Menampilkan Bilangan Genap dan Rata-Rata" << endl;
    cout << "2. Program Menampilkan Bilangan Ganjil dan Rata-Rata" << endl;
    cout << "Silahkan Pilih Program : ";
    cin >> prog;
    if (prog==1){
        cout << "Program Menampilkan Bilangan Genap dan Rata-Rata" << endl;
        cout << "================================================" << endl;
        cout << "Masukkan Range Bilangan : ";
        cin >> n;
        for(i=0;i<=n;i++){
            if(i%2==0){
                if(i==0){
                    continue;
               }
                cout <<"Bilangan Genap : "<< i << endl;
                sum += i;
            }
        }
        cout << "Jumlah : " << sum << endl;
        cout << "Rata-rata : " << sum/n << endl;
    }
    if (prog==2){
        cout << "Program Menampilkan Bilangan Ganjil dan Rata-Rata" << endl;
        cout << "================================================" << endl;
        cout << "Masukkan Range Bilangan : ";
        cin >> n;
        for (i=0; i<=n; i++){
            if (i%2!=0){
                if(i==0){
                    continue;
                }
                cout << "Bilangan Ganjil : "<< i << endl;
                sum += i;
            }
        }
        cout << "Jumlah : " << sum << endl;
        cout << "Rata-rata : " << sum/n << endl;
    }

}
