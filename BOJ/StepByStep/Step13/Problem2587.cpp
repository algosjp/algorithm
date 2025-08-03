#include <iostream>
#include <algorithm>

using namespace std;

bool ascending(int a, int b);

int main() {
    int numArr[5];
    int sum = 0;
    for (int i=0; i<5; i++) {
        cin >> numArr[i];
        sum += numArr[i];
    }

    sort(numArr, numArr+5, ascending);

    cout << sum/5 << "\n";
    cout << numArr[2] << "\n";

    return 0;
}

bool ascending(int a, int b) {
    return a < b;
}