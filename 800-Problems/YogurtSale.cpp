#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main()
{
    int nTests, ammountYogurts, yogurtPrice, discountYogurtPrice, totalCost;
    cin >> nTests;
    for (int i = 0; i < nTests; i++)
    {
        cin >> ammountYogurts >> yogurtPrice >> discountYogurtPrice;
        if (ammountYogurts > 1)
        {
            if (discountYogurtPrice < 2 * yogurtPrice)
            {
                totalCost = (ammountYogurts / 2) * discountYogurtPrice;
                ammountYogurts = ammountYogurts % 2;
                if (ammountYogurts != 0) totalCost = totalCost + yogurtPrice;
                cout << totalCost << endl;
            }
            else
            {
                totalCost = ammountYogurts * yogurtPrice;
                cout << totalCost << endl;
            }
        }
        else
        {
            totalCost = yogurtPrice;
            cout << totalCost << endl;
        }
        totalCost = 0;
    }
    return 0;
}