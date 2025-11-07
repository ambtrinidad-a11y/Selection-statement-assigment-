
#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Enter a code: ";
    cin >> code;

    if (code =1) {
        cout << "First year";
    } else if (code = 2) {
        cout << "Second year";
    } else if (code = 3) {
        cout << "Third year";
    } else if (code = 4) {
        cout << "Fourth year";
    } else if (code = 5) {
        cout << "Fifth year";
    } else {
        cout << "Sorry the number is not in choices";
    }

    return 0;
}
