#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int div = 2;
    while (N > 1) {
        while (N%div == 0) {
            N /= div;
            cout << div << "\n";
        }

        div += 1;
    }
    
    return 0;
}