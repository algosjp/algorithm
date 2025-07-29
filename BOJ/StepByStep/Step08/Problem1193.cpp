#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;

    int num = 1, denom = 1;
    bool flag = true;
    for (int i=1; i<X; i++) {
        if (flag && num == 1) {
            denom += 1;
            flag = false;
        }
        else if (!flag && denom == 1) {
            num += 1;
            flag = true;
        }
        else if (flag) {
            num -= 1;
            denom += 1;
        }
        else if (!flag) {
            num += 1;
            denom -= 1;
        }
    }

    cout << num << "/" << denom << "\n";

    return 0;
}