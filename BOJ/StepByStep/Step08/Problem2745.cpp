#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string N;
    int B;
    cin >> N >> B;

    int B2Ten = 0, l = N.length();
    for (int i=0; i<l; i++) {
        int digit = N[l-i-1]-'0';
        if (17 <= digit && digit < 43) {
            digit -= 7;
        }
        B2Ten += digit * pow(B, i);
    }

    cout << B2Ten << "\n";

    return 0;
}