#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
};

int main()
{
    Restaurant restaurant;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> restaurant.food_item_codes[i];
        cin.ignore();
        getline(cin, restaurant.food_item_names[i]);
        cin >> restaurant.food_item_prices[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout.width(70);
            cout << "Service and Bill" << endl;
            cout << endl;
            cout << "\t"
                 << "NO."
                 << "\t"
                 << "Item Code"
                 << "\t\t\t\t"
                 << "Item Name"
                 << "\t\t\t\t"
                 << "Item Price" << endl;
            cout << endl;
        }
        cout << "\t" << i + 1 << "\t" << restaurant.food_item_codes[i] << "\t\t\t\t\t" << restaurant.food_item_names[i] << "\t\t\t" << restaurant.food_item_prices[i] << endl;
    }
    int tableNo;
    int items;
    cout << endl;
    cout << "Enter table no : ";
    cin >> tableNo;
    cout << "Enter the numbers of items : ";
    cin >> items;
    int foodCodes[items];
    int foodQuantity[items];
    for (int i = 0; i < items; i++)
    {
        label:
        bool isValid = false;
        cout << "Enter item " << i + 1 << " code : ";
        int j = 0;
        cin >> foodCodes[i];
        for (; j < n; j++)
        {   

            if (restaurant.food_item_codes[j] == foodCodes[i])
            {
                isValid = true;
                
              
            }
        }
        if(isValid==false){
            cout<<"Your code is not valid! Try Again."<<endl;
        goto label;
        }
        cout << "Enter item " << i + 1 << " quantity : ";
        cin >> foodQuantity[i];
    }
    int totalPrice;
    int totalBill;
    for (int i = 0; i < items; i++)
    {
        if (i == 0)
        {
            cout.width(70);
            cout << "BILL SUMMARY" << endl;
            cout << endl;
            cout << "Table No : " << tableNo << endl;
            cout << "\t"
                 << "NO."
                 << "\t"
                 << "Item Code"
                 << "\t\t"
                 << "Item Name"
                 << "\t\t"
                 << "Item Price"
                 << "\t"
                 << "Item Quantity"
                 << "\t"
                 << "Total Price"
                 << endl;
            cout << endl;
        }
        int j = 0;

        for (; j < n; j++)
        {
            if (restaurant.food_item_codes[j] == foodCodes[i])
            {
                break;
            }
        }
        totalPrice = foodQuantity[i] * restaurant.food_item_prices[j];
        cout << "\t" << i + 1 << "\t" << restaurant.food_item_codes[j] << "\t\t" << restaurant.food_item_names[j] << "\t\t" << restaurant.food_item_prices[j] << "\t\t" << foodQuantity[i] << "\t\t" << totalPrice << endl;
        totalBill += totalPrice;
    }
    double tax = (totalBill * 5.00) / 100;
    cout << endl;
    cout << "\t"
         << "Tax"
         << "\t\t\t\t\t\t\t\t\t\t\t" << tax << endl;
    cout << "\t"
         << "Total Price"
         << "\t\t\t\t\t\t\t\t\t\t" << totalBill + tax << endl;
    restaurant.total_tax = tax;
    return 0;
}