//Nama : Wahyu Aji Pamungkas
//NIM : A11.2022.14595
//Klp : A11.4116



#include <iostream>

using namespace std;

int main()
{
    int permen;
    int uang = 5000;
    cout << "Jika harga permen: " << endl;
    cin >> permen;
    if(permen == 1000) {
        cout << endl;
        cout << "Ardian Membeli permen sebanyak: " << 3 << endl;
        cout << "perhitungan: " ;
        for(int x = 1000; x <= 3000; x++) {
            if(x % 1000 == 0)
            cout << x << " ";
        }
    }else if(permen == 500) {
       cout << endl;
       cout << "Banyak permen yang dibeli Ardian : " << uang / permen << endl;
       cout << "Perhitungan: " ;
       for(int y=500; y <= 5000; y++) {
            if(y % 500 == 0)
            cout << y << " ";
       }
    } else if(permen == 300) {
        cout << endl;
        cout << "Banyak Peremen Ardian: " << 16 << endl;
        cout << "Perhitungan: ";
        for(permen > 0; permen <= uang; permen++) {
            if(permen % 300 == 0){
                cout << permen << " ";
            }
        }
    }
    return 0;
}
