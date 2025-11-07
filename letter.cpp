#include <iostream>
using namespace std;

int main() {
  char letter;

  cout << "Enter a letter: ";
  cin >> letter;

  letter = tolower(letter);

  if (isalpha(letter)) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
      cout << letter << " is a vowel." << endl;
    } else {
      cout << letter << " is a consonant." << endl;
    }
  } else {
    cout << "Invalid input. Please enter a letter." << endl;
  }

  return 0;
}


