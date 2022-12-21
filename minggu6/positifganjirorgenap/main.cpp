#include <iostream>

using namespace std;

int main()
{
    //kamus
    int bilangan;

    //algotritma
    cout << "Masukan bilangan : " << endl;
    cin >> bilangan;

    if (bilangan > 0){
        if (bilangan % 2 ==0){
            cout << bilangan << " adalah bil.positif genap ";
        }else {
        cout << bilangan<<" adalah bil.positif ganjil";
        }
    }else {
    cout << bilangan<< " bukan bilangan positif";
    }
    return 0;
}
