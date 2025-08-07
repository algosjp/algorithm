#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    long long n;
    for (int i=0; i<T; i++) {
        cin >> n;

        while(!isPrime(n)) {
            n += 1;
        }

        cout << n << "\n";
    }

    return 0;
}

bool isPrime(long long n) {
    if (n < 2) {
        return false;
    }

    long long sqrtN = sqrt(n);
    for (int i=2; i<sqrtN+1; i++) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}