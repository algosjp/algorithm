#include <iostream>

using namespace std;

int main() {
    bool primeArr[1001];
    for (int i=0; i<1001; i++) {
        primeArr[i] = true;
    }
    primeArr[0] = primeArr[1] = false;
    for (int i=2; i<1001; i++) {
        if (primeArr[i]) {
            for (int j=2*i; j<1001; j+=i) {
                primeArr[j] = false;
            }
        }
    }

    int N;
    cin >> N;

    int num, cnt = 0;
    for (int i=0; i<N; i++) {
        cin >> num;
        if (primeArr[num]) {
            cnt += 1;
        }
    }

    cout << cnt << "\n";

    return 0;
}