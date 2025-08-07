#include <iostream>

using namespace std;

int gcd(int a, int b);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    cin >> N;

    int distArr[N-1];
    int x, y;
    cin >> x;
    for (int i=1; i<N; i++) {
        cin >> y;
        distArr[i-1] = y - x;
        x = y;
    }
    
    int gcdiv = distArr[0];
    for (int i=1; i<N-1; i++) {
        gcdiv = gcd(gcdiv, distArr[i]);
    }

    int cnt = 0;
    for (int dist : distArr) {
        cnt += dist/gcdiv-1;
    }

    cout << cnt << "\n";

    return 0;
}

int gcd(int a, int b) {
    int temp = a;
    a = max(a, b);
    b = min(temp, b);

    while (true) {
        temp = b;
        b = a%b;
        a = temp;

        if (b == 0) {
            break;
        }
    }

    return a;
}