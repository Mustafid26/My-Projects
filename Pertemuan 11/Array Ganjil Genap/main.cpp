#include <iostream>
/*
PROGRAM ARRAY Ganjil Genap
Nama : Mustafid Kaisalana
NIM : A11.2022.14703
*/

using namespace std;

int main()
{
    //KAMUS
    int n, sum = 0;
    cout << "Masukkan Jumlah Array : ";
    cin >> n;
    int nilai[n];
    for(int i = 0; i < n; i++){
        cout << "Input Nilai ke- " << i+1 << " : ";
        cin >> nilai[i];
    }
    cout << endl;
    //Algoritma
    for (int i = 0; i < n; i ++){
        if (nilai[i]%2==0){
            cout << "Nilai Genap : ";
            sum += i;
            cout << i << endl;
        }
    }
    cout << "Jumlah dari bilangan genap tersebut adalah : " << sum << endl;
    cout << "Rata-rata dari bilangan genap tersebut adalah : " << sum /n << endl;
    cout << endl;
    sum = 0;
    for (int i = 0; i < n; i ++){
        if (nilai[i]%2!=0){
            cout << "Nilai Ganjil : ";
            cout << i << endl;
            sum+=i;
        }
    }
    cout << "Jumlah dari bilangan ganjil tersebut adalah : " << sum << endl;
    cout << "Rata-rata dari bilangan ganjil tersebut adalah : " << sum /n << endl;
    cout << endl;
    return 0;
}
