#include <iostream>
#include <string>

using namespace std;

int main()
{

    int cel;
    cout << "Enter temperature in celcius : ";
    cin >> cel;

    int far = (cel * (9 / 5)) + 32;

    cout << "celciuls " << cel << " to Fahrenheit " << far;

    return 0;
}
