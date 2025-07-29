#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int dot = 4;
    for (int i=0; i<N; i++) {
        dot *= 4;
        dot -= pow(2, i) * 4;
        dot -= 3;
    }

    cout << dot << "\n";

    return 0;
}