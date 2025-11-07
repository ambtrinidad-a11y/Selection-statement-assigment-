#include <iostream>

using namespace std;

int main() {
    int nos[3][4];
    int r, c;

    cout << "Enter twelve numbers: ";


    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) {
            cin >> nos[r][c];
        }
    }

    
    cout << "The list of odd numbers are: ";
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) {
            if (nos[r][c] % 2 != 0) {
                cout << nos[r][c] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}

