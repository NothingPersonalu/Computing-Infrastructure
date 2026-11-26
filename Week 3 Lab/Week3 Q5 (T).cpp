//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    int shares = 1000;
    double purchasePrice = 45.50;
    double sellingPrice = 56.90;
    double buyingCommission, sellingCommission;
    double purchaseAmount, saleAmount, profit;

    // Calculate the purchase amount
    purchaseAmount = shares * purchasePrice;

    // Calculate the commission paid when buying shares
    buyingCommission = purchaseAmount * 0.02;

    // Calculate the sale amount
    saleAmount = shares * sellingPrice;

    // Calculate the commission paid when selling shares
    sellingCommission = saleAmount * 0.02;

    // Calculate the final profit after both commissions
    profit = saleAmount - sellingCommission
             - purchaseAmount - buyingCommission;

    // Display the results
    cout << fixed << setprecision(2);

    cout << "Amount paid for stock: $"
         << purchaseAmount << endl;

    cout << "Buying commission: $"
         << buyingCommission << endl;

    cout << "Amount received from stock sale: $"
         << saleAmount << endl;

    cout << "Selling commission: $"
         << sellingCommission << endl;

    cout << "Profit: $" << profit << endl;

    return 0;
}
