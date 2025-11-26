#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    bool membershipCard;

    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    cout << "Do you have a Membership Card? (1 for Yes, 0 for No): ";
    cin >> membershipCard;

    (purchaseAmount > 5000 || membershipCard) && cout << "Discount Applied\n";
    !(purchaseAmount > 5000 || membershipCard) && cout << "No Discount\n";

    return 0;
}
