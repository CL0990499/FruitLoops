#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare an array of five fruits
    string fruits[5] = { "Apple", "Banana", "Cherry", "Grape", "Orange" };

    // Print the list of fruits using a range-based for loop
    cout << "Here are the fruits in the list:" << endl;
    for (const string& fruit : fruits) {
        cout << fruit << endl;
    }

    return 0;
}
