#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    // Using logical operators + single ternary operator
    cout << "Age " << age << " falls under the category: "
         << ((age < 13 && age >= 0) ? "Child"
             : (age >= 13 && age <= 19) ? "Teenager"
             : (age >= 20 ? "Adult" : "Invalid Age")) << endl;

    return 0;
}
