#include <iostream>
#include <math.h>
using namespace std;

int main () {
    float x1, y1, x2, y2, hasil, hasilfix;
    cout << "Masukkan X1 : ";
    cin >> x1;
    cout << "Masukkan Y1 : ";
    cin >> y1;
    cout << "Masukkan X2 : ";
    cin >> x2;
    cout << "Masukkan Y2 : ";
    cin >> y2;
    hasil = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    hasilfix = sqrt(hasil);
    cout << hasilfix << " adalah jarak 2 titik";
    return 0;
}