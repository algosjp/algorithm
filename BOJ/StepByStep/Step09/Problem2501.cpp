#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int kthDiv = 0;
    for (int i=1; i<N+1; i++) {
        if (N%i == 0) {
            K -= 1;
        }

        if (K == 0) {
            kthDiv = i;
            break;
        }
    }

    cout << kthDiv << "\n";
    
    return 0;
}