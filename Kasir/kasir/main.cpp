#include <iostream>

int main(){
    int tuku, total, diskon, gudang1=100, gudang2;
    char member;

    std::cout << "||=== Toko Sendal Wakaranai ===|| \n";
    std::cout << "Pemesanan (dalam bentuk pasang Sendal): "; std::cin >> tuku;
    std::cout << "Anda membeli "<< tuku << " pasang Sendal\n";

    // Sendale 10k boyyyy... murah polll
    total = tuku *10000;
    std::cout << "Jumlah yang harus anda bayar: Rp " << total << std::endl << std::endl;

    // status membere, duwe po ra
    std::cout << "---> Pembayaran <---\n";
    status:
    std::cout << "Apakah anda memiliki kartu member? (Y/T) --> "; std::cin >> member;
    if (member == 'y' || member == 'Y'){
        diskon = total / 100 * 80;
        std::cout << "Total biaya yang harus dibayar : Rp " << diskon << std::endl << std::endl;        // duwe member pasti diskon bosss
    }
    else if (member == 't' || member == 'T'){
        if (total >= 1000000){
            diskon = total / 100 * 80;       // lumayan diskon walaupun gak duwe member
        }
        else{
            diskon = total;                 // no member = no diskon
        }
        std::cout << "Total biaya yang harus dibayar : Rp " << diskon << std::endl << std::endl;
    }
    else{
        std::cout << "Inputan invalid, silahkan inputkan kembali dengan huruf Y/y atau T/t\n";
        goto status;
    }

    // status gudange, barange iseh ono opo ra
    std::cout << "---> Status pengiriman <---\n";
    if (tuku <= gudang1){
        std::cout << "Supply mencukupi, barang anda akan segera dikirim!\n";
    }
    else {
        gudang2 = tuku - gudang1;
        std::cout << "Supply di gudang pertama tidak mencukupi, barang yang akan dikirim sebanyak " << gudang1 << " pasang terlebih dahulu dengan pengiriman gelombang pertama.\n";
        std::cout << "Sisa barang sebanyak " << gudang2 << " yang belum terkirim akan dikirim dari gudang kedua dengan pengiriman gelombang kedua tatapi akan mengalami delay.\n";
        std::cout << "Dimohon simpan B.O atau mungkin bukti pembayaran serta penerimaan barang gelombang pertama (jika sudah sampai) anda sampai barang gelombang kedua sampai ke tempat anda.\n\n";

    }
    std::cout << "##--- TERIMAKASIH TELAH BERBELANJA DI TOKO WAKARANAI ---##\n";

    return 0;
}
