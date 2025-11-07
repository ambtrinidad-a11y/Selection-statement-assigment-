#include <iostream>
using namespace std;

int main() {
    int n[5], high = 0;

    cout << "Enter five numbers: ";
    for (int a = 0; a < 5; a++) {
        cin >> n[a];
        if (n[a] > high)
            high = n[a];
    }

    cout << "The highest is: " << high << "\n";
    cout << "Their difference from the highest are:\n";
    for (int a = 0; a < 5; a++) {
        cout << n[a] << " difference " << (high - n[a]) << endl;
    }

5
55
    return 0;
}