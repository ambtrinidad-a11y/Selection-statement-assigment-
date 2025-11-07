#include <iostream>

using namespace std;

int main() {
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    switch (letter) {
        case 'B':
        case 'b':
            cout << "The color is  BLUE" << endl;
            break;
        case 'Y':
        case 'y':
            cout << "The color is  YELLOW" << endl;
            break;
        case 'P':
        case 'p':
            cout << "The color is  PINK or PURPLE" << endl;
            break;
        case 'O':
        case 'o':
            cout << "The color is ORANGE" << endl;
            break;
        case 'K':
        case 'k':
            cout << "The color is  BLACK" << endl;
            break;
        case 'G':
        case 'g':
           cout << "The color is GRAY or GREEN" << endl;
            break;
        case 'S':
        case 's':
            cout << "The color is SKY BLUE" << endl;
            break;
        case 'M':
        case 'm':
            cout << "The color is  MAROON" << endl;
            break;
        case 'R':
        case 'r':
            cout << "The color is RED" << endl;
            break;
        default:
            cout << "Color not found for this letter." << endl;
    }

    return 0;
}
