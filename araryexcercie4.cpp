#include <iostream>
using namespace std;

int main() {
    int nos[3][4];
    int search, count = 0;

    cout << "Enter twelve numbers:\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            cin >> nos[r][c];
        }
    }

    cout << "Enter a number to search: ";
    cin >> search;

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            if (nos[r][c] == search)
                count++;
        }
    }

    cout << "Occurrence(s): " << count << endl;
    return 0;
}