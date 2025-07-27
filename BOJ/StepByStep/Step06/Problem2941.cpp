#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;
    string pattern[8] = {
        "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="
    };

    for (string croAlpha : pattern) {
        size_t pos = input.find(croAlpha);
        while (pos != string::npos) {
            input.replace(pos, croAlpha.length(), "*");
            pos = input.find(croAlpha);
        }
    }

    cout << input.length() << "\n";

    return 0;
}