#include <iostream>

using namespace std;

int main()
{
    int x;
    for(x = 1;x <= 100;x++) {
            if(x % 2 == 1) {
                continue;
            }
        cout << "Nilai Genap adalah " << x << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
