#include <iostream>
using namespace std;

void printarray(int arg[], int length) {
    for (int n = 0; n < length; n++)
        cout << arg[n] << " ";
    cout << "\n";
}

int main() {
    int first_array[] = {5, 10, 15};
    int second_array[] = {2, 4, 6, 8, 10};

    printarray(first_array, 3);
    printarray(second_array, 5);

    return 0;
}