#include <iostream>

using namespace std;

int digitSum(int n);

int main() {
    int N;
    cin >> N;

    for (int i=1; i<N; i++) {
        if (i+digitSum(i) == N) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";

    return 0;
}

int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n%10;
        n /= 10;
    }

    return sum;
}