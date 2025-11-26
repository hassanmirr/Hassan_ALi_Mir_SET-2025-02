#include <iostream>
using namespace std;

int main() {
    int attendance;
    int feePaid;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    cout << "Enter fee paid (1 for Yes, 0 for No): ";
    cin >> feePaid;

    (attendance >= 75 && feePaid == 1) && cout << "Eligible\n";
    (attendance < 75 || feePaid == 0) && cout << "Not Eligible\n";

    return 0;
}
