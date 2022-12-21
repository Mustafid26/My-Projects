#include <iostream>

using namespace std;

int main()
{
    //kamus
    float ipk;
    cout << "masukan IPK : " << endl;
    cin>>ipk;

    //algoritma

    if ((ipk<2.5)&&(ipk>=0)){
        cout << "tidak lulus";
    }else if ((2.5 < ipk) && (ipk<= 3.49)){
    cout << "dipertimbangkan";
    }else if ((ipk >= 3.5)&&(ipk <= 4.0)){
    cout << "lulus";
    }
    else {
        cout << "inputan salah";
    }
    return 0;
}
