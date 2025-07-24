#include <iostream>

using namespace std;

int main() {
    int N, M, i, j, k;
    cin >> N >> M;
    int bucket[N+1] = {0};
    
    for (int m=0; m<M; m++) {
        cin >> i >> j >> k;
        for (int b=i; b<j+1; b++) {
            bucket[b] = k;
        }
    }

    for (int b=1; b<N+1; b++) {
        cout << bucket[b] << " ";
    }
    cout << "\n";

    return 0;
}