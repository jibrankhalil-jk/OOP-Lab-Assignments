#include <iostream>
#include <string>

using namespace std;

void eliminate_duplicates(int arra[], int numOfCells);
void printArray(int *array, int size);
bool dublicate(int array[], int search, int size);

int main()
{
    int myarra[] = {58, 26, 91, 26, 70, 70, 91, 58, 58, 58, 66};

    int arraysize = sizeof(myarra) / sizeof(myarra[0]);

    cout << "Original Array " << endl;
    printArray(myarra, arraysize);

    cout << endl;
    eliminate_duplicates(myarra, arraysize);

    return 0;
}

void eliminate_duplicates(int arra[], int numOfCells)
{
    int unique[numOfCells];
    int total = 0;
    for (int i = 0; i < numOfCells; i++)
    {
        unique[i] = 0;
    }

    for (int i = 0; i < numOfCells; i++)
    {

        if (dublicate(unique, arra[i], numOfCells) == false)
        {
            unique[total++] = arra[i];
        }
    }

    numOfCells = total;
    cout << endl;
    cout << "Updated Array " << endl;
    for (int i = 0; i < numOfCells; i++)
    {
        cout << unique[i] << ", ";
    }
};

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout
            << array[i] << ", ";
    }
    cout << "\n";
}

bool dublicate(int array[], int search, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (search == array[i])
        {
            return true;
        }
    }

    return false;
}