#include <iostream>

using namespace std;

bool find666(int i);

int main() {
    int N;
    cin >> N;

    int i = 665;
    while (N > 0) {
        i += 1;

        if (find666(i)) {
            N -= 1;
        }
    }

    cout << i << "\n";

    return 0;
}

bool find666(int n) {
    string N = to_string(n);
    for (int i=0; i<N.length()-2; i++) {
        if (N[i] == '6' && N[i+1] == '6' && N[i+2] == '6') {
            return true;
        }
    }

    return false;
}