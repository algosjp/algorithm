#include <iostream>

using namespace std;

int main() {
    int N, v;
    cin >> N;
    int numArr[N];
    for (int i=0; i<N; i++) {
        cin >> numArr[i];
    }
    cin >> v;

    int cnt = 0;
    for (int num : numArr) {
        if (num == v) {cnt += 1;}
    }

    cout << cnt << "\n";

    return 0;
}