#iinclude <iostream>

using namespace std;

int main() {
    char player1, player2;

    cout << "Player 1, enter your choice (S for Scissors, R for Rock, P for Paper): ";
    cin >> player1;

    cout << "Player 2, enter your choice (S for Scissors, R for Rock, P for Paper): ";
    cin >> player2;


    if (player1 >= 'a' && player1 <= 'z') {
        player1 = player1 - 32; 
    }
    if (player2 >= 'a' && player2 <= 'z') {
        player2 = player2 - 32; 
    }

    cout << endl;  

    switch (player1) {
        case 'S':
            switch (player2) {
                case 'S':
                    cout << "It's a tie!" << endl;
                    break;
                case 'R':
                    cout << "Player 2 wins! Rock crush Scissors." << endl;
                    break;
                case 'P':
                    cout << "Player 1 wins! Scissors cuts Paper." << endl;
                    break;
                default:
                    cout << "Player 2's input is invalid. Please enter S, R, or P." << endl;
                    return 1;
            }
            break;
        case 'R':
            switch (player2) {
                case 'S':
                    cout << "Player 1 wins! Rock crush Scissors." << endl;
                    break;
                case 'R':
                    cout << "It's a tie!" << endl;
                    break;
                case 'P':
                    cout << "Player 2 wins! Paper covers Rock." << endl;
                    break;
                default:
                    cout << "Player 2's input is invalid. Please enter S, R, or P." << endl;
                    return 0;
            }
