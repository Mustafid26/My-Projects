#include <iostream>
/*Program wujud Air
{program untuk mengecek wjud air berdasarkan suhu}
by:Dhia Tawakalna
Tgl:14 Oktober 2022
*/

using namespace std;

int main()
{
    //Kamus
    int suhu;

    cout << "Masukan suhu air : ";
    cin>> suhu;

    if (suhu < 0) {
        cout << "beku";
    }
    else if (suhu==0){
    cout << "beku-cair";
    }
    else if ((0 < suhu) && (suhu<100)){
    cout << " cair";
    }
    else if (suhu > 100){
        cout << "uap";
    }
    else if (suhu == 100){
        cout << "cair uap";
    }
    return 0;
}
