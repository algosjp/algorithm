#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    bool prime[1000001] = {false};
    prime[0] = prime[1] = true;
    for (int i=2; i*i<1000001; i++) {
        if (!prime[i]) {
            for (int j=2*i; j<1000001; j+=i) {
                prime[j] = true;
            }
        }
    }

    int T;
    cin >> T;

    int N, cnt;
    for (int i=0; i<T; i++) {
        cin >> N;

        cnt = 0;
        for (int j=2; j<=N/2; j++) {
            if (!prime[j] && !prime[N-j]) {
                cnt += 1;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}