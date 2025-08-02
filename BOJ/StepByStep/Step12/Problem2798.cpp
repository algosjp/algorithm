#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int cardArr[N];
    for (int i=0; i<N; i++) {
        cin >> cardArr[i];
    }

    int max = 0, sum;
    for (int i=0; i<N-2; i++) {
        for (int j=i+1; j<N-1; j++) {
            for (int k=j+1; k<N; k++) {
                sum = cardArr[i] + cardArr[j] + cardArr[k];
                if (sum <= M) {
                    if (sum > max) {
                        max = sum;
                    }
                }
            }
        }
    }

    cout << max << "\n";

    return 0;
}