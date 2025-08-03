#include <iostream>
#include <algorithm>

using namespace std;

bool descending(int a, int b);

int main() {
    int N, k;
    cin >> N >> k;

    int scoreArr[N];
    for (int i=0; i<N; i++) {
        cin >> scoreArr[i];
    }

    sort(scoreArr, scoreArr+N, descending);

    cout << scoreArr[k-1] << "\n";

    return 0;
}

bool descending(int a, int b) {
    return a > b;
}