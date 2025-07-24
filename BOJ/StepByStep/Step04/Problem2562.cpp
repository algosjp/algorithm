#include <iostream>

using namespace std;

int main() {
    int numArr[9];
    for (int i=0; i<9; i++) {
        cin >> numArr[i];
    }

    int max = 0, idx;
    for (int i=0; i<9; i++) {
        if (numArr[i] > max) {
            max = numArr[i];
            idx = i+1;
        }
    }

    cout << max << "\n";
    cout << idx << "\n";

    return 0;
}