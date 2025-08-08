#include <iostream>

using namespace std;

bool isPrime(int n);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, cnt;
    while (true) {
        cin >> n;
        
        if (n == 0) {
            break;
        }

        cnt = 0;
        for (int i=n+1; i<=2*n; i++) {
            if (isPrime(i)) {
                cnt += 1;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }

    for (int i=2; i*i<=n; i++) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}