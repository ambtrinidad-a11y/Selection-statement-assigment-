#include <iostream>
using namespace std;

int main() {
    int n[5];
    cout << "Enter five numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> n[i];
    }

    int low = n[0];
    for (int i = 1; i < 5; i++) {
        if (n[i] < low)
            low = n[i];
    }

    cout << "The lowest is: " << low << endl;
    cout << "Their difference from the lowest are:";
    for (int i = 0; i < 5; i++) {
        cout << n[i] << " difference " << (n[i] - low) << endl;
    }

    return 0;
}