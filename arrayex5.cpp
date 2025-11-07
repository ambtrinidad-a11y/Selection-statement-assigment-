#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    
    cout << "One Dimensional Array\n";


    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i + 10;
    }
    cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}