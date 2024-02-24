#include <iostream>
#include <string>

using namespace std;

int main()
{

    int a = 12;
    int b = 10;

    cout << "a : " << a << " , b : " << b << endl;

    a = a + b; // 10 + 12 = ; 
    b = a - b; // 10 - 12 = ; 
    a = a - b; // 10 - 12 = ; 

    cout << " after swaping >> a : " << a << " , b : " << b << endl;

    return 0;
}
