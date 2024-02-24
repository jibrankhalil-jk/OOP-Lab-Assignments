#include <iostream>
#include <string>

using namespace std;

int TotalCharges = 0;

int main()
{
    bool again = true;
    char hotel[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            hotel[i][j] = '-';
        }
    }

    bool retry = true;

    do
    {

        cout << "Hotel Room Booking System" << endl;
        cout << "1.Book a Room" << endl;
        cout << "2.Show Available Rooms" << endl;
        cout << "3.Exit" << endl;

        int choice;
        cout << "Enter your Choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int floor, room, days;

            do
            {
                cout << "Enter the floor number (1-4) :";
                cin >> floor;
                if (!(floor >= 1 && floor <= 4))
                {
                    cout << "Invalid Input!" << endl;
                    continue;
                }
                again = false;
            } while (again);
            again = true;
            do
            {
                cout << "Enter the Room number (1-5) :";
                cin >> room;
                if (!(room >= 1 && room <= 5))
                {
                    cout << "Invalid Input!" << endl;
                    continue;
                }
                again = false;
            } while (again);
            again = true;
            do
            {
                cout << "Enter the number of Days :";
                cin >> days;
                if (!(days >= 1))
                {
                    cout << "Invalid Input!" << endl;
                    continue;
                }
                again = false;
            } while (again);

            if (hotel[floor - 1][room - 1] != '*')
            {
                if (floor == 1 || floor == 2)
                {
                    TotalCharges = 10000 * days;
                }
                else
                {
                    TotalCharges = 6000 * days;
                }
                hotel[floor - 1][room - 1] = '*';

                cout << "Floor : " << floor << " Room : " << room << " sucessfully Booked." << endl;
                cout << "Your total cost for " << days << " is " << TotalCharges << " Rupees" << endl
                     << endl;
            }
            else
            {
                cout << "Room Not Available , Check Another" << endl
                     << endl;
            }

            break;
        case 2:
            cout << "Room Status :\n";

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << hotel[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            cout << "Exiting the program. Thank you";
            return 0;
            break;

        default:
            system("cls");
            break;
        }
    } while (retry);

    return 0;
}
