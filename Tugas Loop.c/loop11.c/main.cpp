#include <iostream>

using namespace std;

int main()
{
    int x,i;
    cout << "Masukkan Angka: " << endl;
    cin >> x;
    for(i = 1; i <= 10; i++) {
        cout << x << "x" << i << "=" << (x*i) << endl;
    }
    return 0;
}
