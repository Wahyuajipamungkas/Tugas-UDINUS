#include <iostream>

using namespace std;

int main()
{
    int x,y;
    for(x = 100, y = 1; x >= 1 &&  y <=100; x--,y++) {
        cout << "x=" << x << " dan " << "y=" << y << endl;
    }
    return 0;
}
