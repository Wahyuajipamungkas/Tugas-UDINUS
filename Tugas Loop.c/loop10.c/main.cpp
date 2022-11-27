#include <iostream>

using namespace std;

int main()
{

        int x,i;
        for(i = 1; i <=7; i++) {
        cout << "Looping Yang ke-" << i << endl;
        for(x = 1; x <= 7; x++)
                cout << "-angka" << x << "-" << endl;
    }
    return 0;
}
