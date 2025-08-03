#include <iostream>
#include <algorithm>

using namespace std;

bool ascending(int a, int b);

int main() {
    int N;
    cin >> N;

    int numArr[N];
    for (int i=0; i<N; i++) {
        cin >> numArr[i];
    }

    sort(numArr, numArr+N, ascending);

    for (int i=0; i<N; i++) {
        cout << numArr[i] << "\n";
    }
    
    return 0;
}

bool ascending(int a, int b) {
    return a < b;
}