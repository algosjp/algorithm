#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int digits[4];
    digits[3] = num1*num2;
    for (int i=0; i<3; i++) {
        digits[i] = num2%10;
        num2 /= 10;
    }

    for (int i=0; i<3; i++) {
        cout << num1*digits[i] << "\n";
    }
    cout << digits[3] << "\n";

    return 0;
}