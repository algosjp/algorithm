#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string Ten2B = "";
    while (N > 0) {
        int digit = N%B + 48;
        if (digit > 57) {
            digit = digit + 7;
        }
        Ten2B += char(digit);
        N /= B;
    }
    reverse(Ten2B.begin(), Ten2B.end());

    cout << Ten2B << "\n";

    return 0;
}