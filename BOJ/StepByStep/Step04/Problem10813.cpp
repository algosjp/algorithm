#include <iostream>

using namespace std;

int main() {
    int N, M, i, j;
    cin >> N >> M;
    int bucket[N+1];
    for (int i=0; i<N+1; i++) {
        bucket[i] = i;
    }

    for (int m=0; m<M; m++) {
        cin >> i >> j;
        swap(bucket[i], bucket[j]); 
    }

    for (int b=1; b<N+1; b++) {
        cout << bucket[b] << " ";
    }
    cout << "\n";

    return 0;
}