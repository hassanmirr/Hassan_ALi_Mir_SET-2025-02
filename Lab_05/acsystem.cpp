#include <iostream>
using namespace std;

int main() {
    int temperature;
    int windowClosed;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Is the window closed? (1 = Yes, 0 = No): ";
    cin >> windowClosed;

    cout << ((temperature > 30 && windowClosed == 1) ? "AC ON" : "AC OFF");

    return 0;
}
