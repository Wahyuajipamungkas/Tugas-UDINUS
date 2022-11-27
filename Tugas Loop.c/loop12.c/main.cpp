#include <iostream>

using namespace std;

int main()
{
    float celcius,fahrenheit;
    cout << "-------------------------" << endl;
    cout << "celcius    fahrenheit" << endl;
    cout << "-------------------------" << endl;
    for(celcius = 0; celcius <= 100; celcius++) {

    //Rumus Fahrenheit
    fahrenheit = celcius * 9/5 + 32;
        cout << celcius << "       :  " << fahrenheit << "           :" << endl;
    }
    cout << "----------------------------" << endl;
    return 0;
}
