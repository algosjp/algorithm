#include <iostream>

using namespace std;

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    int comp = 1;
    if (a1-c > 0 || (a1-c)*n0+a0 > 0) {
        comp = 0;
    }

    cout << comp << "\n";

    return 0;
}