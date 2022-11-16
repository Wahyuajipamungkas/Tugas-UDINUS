#include <iostream>

using namespace std;

int main()
{
    while(true) {
    cout << "==== Daftar Menu Makanan ====" << endl;
    cout << "1. Nasi Kerikirl" << endl;
    cout << "2. Rica Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;
    cout << "4. Kepiting Presto" << endl;
    int menu;
    cout << "Masukkan Kode Makanan: " << endl;
    cin >> menu;
    switch(menu) {
    case 1:
       cout << "Nasi Kerikirl" << endl;
       break;
    case 2:
        cout << "Rica Rica Brotowali" << endl;
        break;
    case 3:
        cout << "Pepes Brotowali" << endl;
        break;
    case 4:
        cout << "Kepiting Presto" << endl;
        break;
    default:
        cout << "Maaf,Kode yang anda masukkan tidak diketahui" << endl;
    }
    }
    return 0;
}
