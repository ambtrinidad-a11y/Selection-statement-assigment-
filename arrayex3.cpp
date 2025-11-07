#include <iostream>
using namespace std;
int sort_max(int num[5]) {
    int maxval = num[0], maxpos = 0;
    for (int POS = 1; POS < 5; POS++) {
        if (num[POS] > maxval) {
            maxval = num[POS];
            maxpos = POS;
        }
    }
    cout << "The largest integer is integer no. " << (maxpos + 1) << endl;
    return maxval;
}

int main() {
    int num_array[5], lnum;
    for (int i = 0; i < 5; i++) {
        cout << "Enter integer no. " << (i + 1) << ": ";
        cin >> num_array[i];
    }
    lnum = sort_max(num_array);
    cout << "The largest integer is: " << lnum << endl;
    system("pause");
    return 0;
}