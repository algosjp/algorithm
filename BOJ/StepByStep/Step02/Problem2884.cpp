#include <iostream>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    if (M < 45) {
        H += 23;
        H %= 24;
        M += 15;
        M %= 60;
    }
    else if (M >= 45) {
        M -= 45;
    }

    cout << H << " " << M << "\n";

    return 0;
}