#include <iostream>
#include <string>

using namespace std;

class Inventory
{
public:
    int id;
    string name;
    int price;
    int quantity;

    Inventory(){};
    Inventory(int id, string name, int price, int quantity) : id(id), name(name), price(price), quantity(quantity){};
    ~Inventory() { cout << "object destroyed" << endl; };

    void display_item()
    {
        cout << "Item : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
};

void DisplayItems(Inventory items[], int total);
void UpdateItemDetails(Inventory &item);
int SearchItemById(int id, Inventory items[], int total);
bool containItem(int id, Inventory items[], int total, int &itemindex);


int main()
{
    int total;
    cout << "Enter the total no of items to store: ";
    cin >> total;

    Inventory items[total];
    for (int i = 0; i < total; i++)
    {

        cout << "Enter Item ID : ";
        cin >> items[i].id;
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin, items[i].name);
        cout << "Enter Price : ";
        cin >> items[i].price;
        cout << "Enter Quantity : ";
        cin >> items[i].quantity;
        cout << endl;
    }

    // menu
    bool retry = true;
    do
    {
        int menu_chooice;
        cout << "\n1). Display Items\n2). Update item details\n3). Search for items by ID\n4). Exit" << endl;
        cin >> menu_chooice;

        switch (menu_chooice)
        {
        case 1:
            DisplayItems(items, total);
            break;
        case 2:
            do
            {
                cin.clear();
                int iid;
                cout << "Enter Item Id:";
                cin >> iid;
                int itemindex;
                if (containItem(iid, items, total, itemindex))
                {
                    UpdateItemDetails(items[itemindex]);
                    cout << "Updated sucesfully!" << endl;

                    break;
                }
                else
                {
                    cout << "item not found , retry!" << endl;
                    break;
                    // continue;
                }

            } while (1);
            break;
        case 3:
            int id, iditemindex;
            cout << "enter id to search:";
            cin >> id;
            iditemindex = SearchItemById(id, items, total);
            if (iditemindex == -1)
            {
                cout << "Not Found!" << endl;
            }
            else
            {
                items[iditemindex].display_item();
            }
            break;
        case 4:
            retry = false;
            break;
        default:
            cout << "Wrong Input retry !" << endl;
            break;
        }
    } while (retry);

    return 0;
}

void DisplayItems(Inventory items[], int total)
{
    for (int i = 0; i < total; i++)
    {
        items[i].display_item();
        cout << endl;
    }
};
void UpdateItemDetails(Inventory &item)
{
    cout << "Item id : " << item.id << endl;
    char update = false;
    cout << "update Price ? (y/n): ";
    cin >> update;
    if (update == 'y' || update == 'Y')
    {
        cin >> item.price;
    }
    update = false;
    cout << "update Qunatity? (y/n): ";
    cin >> update;
    if (update == 'y' || update == 'Y')
    {
        cin >> item.quantity;
    }
};

int SearchItemById(int id, Inventory items[], int total)
{
    for (int i = 0; i < total; i++)
    {
        if (items[i].id == id)
        {
            return i;
        }
    }
    return -1;
};

bool containItem(int id, Inventory items[], int total, int &itemindex)
{
    for (int i = 0; i < total; i++)
    {
        if (id == items[i].id)
        {
            itemindex = i;
            return true;
        }
    }
    return false;
};
