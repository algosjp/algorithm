#include <iostream>

using namespace std;

int main() {
    int xDot[1001] = {0}, yDot[1001] = {0};

    int x, y;
    for (int i=0; i<3; i++) {
        cin >> x >> y;
        xDot[x] += 1;
        yDot[y] += 1;
    }

    for (int i=0; i<1001; i++) {
        if (xDot[i]%2 != 0) {
            cout << i << " ";
        }
    }
    for (int i=0; i<1001; i++) {
        if (yDot[i]%2 != 0) {
            cout << i << "\n";
        }
    }

    return 0;
}