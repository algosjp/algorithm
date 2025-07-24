#include <iostream>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    for (int n : A) {
        if (n < X) {
            cout << n << " ";
        }
    }
    cout << "\n";
    
    return 0;
}