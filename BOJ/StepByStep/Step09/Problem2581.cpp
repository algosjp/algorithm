#include <iostream>

using namespace std;

bool checkPrime(int n);

int main() {
    int M, N;
    cin >> M >> N;

    int sum = 0, min;
    for (int i=N; i>M-1; i--) {
        if (checkPrime(i)) {
            sum += i;
            min = i;
        }
    }

    if (sum == 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << sum << "\n";
    cout << min << "\n";

    return 0;
}

bool checkPrime(int n) {
    if (n == 1) {
        return false;
    }

    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}