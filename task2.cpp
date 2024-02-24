#include <iostream>
#include <string>

using namespace std;

float *subtotal(float floatingPoints[], int numOfCells);

int main()
{

    // float myarra[5] = {1,2,3,4,5};
    float myarra[5] = {5.8, 2.6, 9.1, 3.4, 7.0};
    int arraysize = sizeof(myarra) / sizeof(myarra[0]);

    for (int i = 0; i < arraysize; i++)
    {
        cout
            << myarra[i] << ", ";
    }
    cout << "\n";

    float *updatedArray = subtotal(myarra, 5);
    for (int i = 0; i < arraysize; i++)
    {
        cout << updatedArray[i] << ", ";
    }

    return 0;
}

float *subtotal(float floatingPoints[], int numOfCells)
{
    float *updatedArra;
    for (int i = 0; i < numOfCells; i++)
    {
        if (i > 0)
        {
            updatedArra[i] = floatingPoints[i] + updatedArra[i - 1];
        }
        else
        {
            updatedArra[i] = floatingPoints[i];
        }
    }
    return updatedArra;
}