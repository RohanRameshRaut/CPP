#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};

            /*
            these are the effects after the first for loop completes.
                1  2  3
                      ^
                      |
                      |
                     ptr
              ptrTemp
            
            
            */


int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34]; 34 integers memory will be allocated and address of first integer will be stored in ptr variable, then you can access it by incrementing it.

    // 1.general store item
    // 2.veggies item
    // 3.hardware item
    ShopItem *ptr = new ShopItem[size]; 
    ShopItem *ptrTemp = ptr; // this is for second for loop (linkedList concept, representing the first address)
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item: " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; // at the last this ptr variable is at object 3, it will not go back to 1 as it stores the address of 3rd now.
    }

    for (int i = 0; i < size; i++)
    {

        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}