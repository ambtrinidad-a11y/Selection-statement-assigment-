#include <iostream>
using namespace std;

int main() {
    int k, j;
    int seat[3][3] = {{0, 0, 1}, {1, 0, 1}, {1, 1, 0}};

    cout << "     Seats" << endl;
    for (k = 0; k < 3; k++) {
        for (j = 0; j < 3; j++) {
            cout << seat[k][j] << "\t";
        }
        cout << "n";
    }

    cout << " seats:";
    for (k = 0; k < 3; k++) {
        for (j = 0; j < 3; j++) {
            if (seat[k][j] == 1)
                cout << "Row " << (k + 1) << " Column " << (j + 1) << " seat is occupied" << endl;
        }
    }

    system("pause");
    return 0;
}