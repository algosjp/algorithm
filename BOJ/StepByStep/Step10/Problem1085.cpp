#include <iostream>

using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    cout << min(min(min(abs(x-w), abs(y-h)), x), y) << "\n";

    return 0;
}