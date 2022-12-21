#include <iostream>
/*
PROGRAM JUMLAH DERET BILANGAN
NOTASI 5 => BERDASAR PENCACAH/I TRANSVERSAL
*/
using namespace std;

int main()
{
    //KAMUS
    int i,n,bil,sum=0;
    //ALGORITMA
    cout << "Inputkan jumlah yang ingin diulang : ";
    cin >> n;
    for (i=1;i<=n;i++){
        cout << "Inputkan bilangan ke- " << i << " : ";
        cin >> bil;
        sum += bil;
    }
    cout << "Jumlah deret bilangan : " << sum << endl;
    cout << "Rata-rata deret bilangan : " << sum/n << endl;
    return 0;
}
