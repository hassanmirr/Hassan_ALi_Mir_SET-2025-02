#include <iostream>
using namespace std;

int main()
 {
    //1. Mobile Recharge Bonus
    double balance, rechargeAmount;
    cout << "Enter current balance: ";
    cin >> balance;
    cout << "Enter recharge amount: ";
    cin >> rechargeAmount;
    balance += rechargeAmount * 1.1;
    cout << "Updated Balance: " << balance << endl << endl;

    //2. Teacher adds 5 grace marks
    int marks;
    cout << "Enter student's assignment marks: ";
    cin >> marks;
    marks += 5;
    cout << "Updated Marks of Assignment: " << marks << endl << endl;

    //3. Car consumes 2 liters petrol per trip---
    double fuel;
    cout << "Enter current fuel level in liters: ";
    cin >> fuel;
    fuel -= 2;
    cout << "Remaining Fuel: " << fuel << " liters" << endl << endl;

    //4.AC control
    int temperature;
    bool windowClosed;
    cout << "Enter room temperature: ";
    cin >> temperature;
    cout << "Is window closed? (1 for Yes, 0 for No): ";
    cin >> windowClosed;

    // use ternaryy and logical operators
    cout << ((temperature > 30 && windowClosed) ? "AC ON\n" : "AC OFF\n");

    return 0;
}
