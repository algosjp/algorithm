#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int move = 1, jump = 6;
    while (N > 1) {
        N -= jump;
        move += 1;
        jump += 6;
    }

    cout << move << "\n";

    return 0;
}