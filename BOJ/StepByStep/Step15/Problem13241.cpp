#include <iostream>

using namespace std;

long long gcd(long long A, long long B);

int main() {
    long long A, B;
    cin >> A >> B;

    cout << A*B/gcd(A, B) << "\n";

    return 0;
}

long long gcd(long long A, long long B) {
    long long temp = A;
    A = max(A, B);
    B = min(temp, B);

    while (true) {
        temp = B;
        B = A%B;
        A = temp;

        if (B == 0) {
            break;
        }
    }

    return A;
}