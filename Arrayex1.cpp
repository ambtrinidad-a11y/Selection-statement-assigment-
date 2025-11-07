
#include <iostream>
using namespace std;

int score[] = {34, 20, 13, 40, 50};
int n, result = 0;

int main() {
    for (n = 0; n < 5; n++)
        result += score[n];

    cout << "The average score is: " << (result / 5) << endl;
    return 0;
}