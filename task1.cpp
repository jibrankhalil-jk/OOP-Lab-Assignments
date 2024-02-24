#include <iostream>
#include <string>

using namespace std;

int main()
{

    float floatvar = 12;
    long longvar = 12;

    cout << "size of int : " << sizeof(10) << endl;
    cout << "size of char : " << sizeof('&') << endl;
    cout << "size of float : " << sizeof(floatvar) << endl;
    cout << "size of long  : " << sizeof(longvar) << endl;
    cout << "size of double : " << sizeof(333.23121313213212131332133123333) << endl;
    return 0;
}
