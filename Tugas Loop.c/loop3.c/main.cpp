#include <iostream>

using namespace std;

int main()
{
    int x;
    for (x = 1; x <= 100; x++) {
        if (x == 56) {
            break;
        }
        cout << x << endl;
    }
    return 0;
}
