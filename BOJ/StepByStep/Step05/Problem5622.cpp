#include <iostream>

using namespace std;

int main() {
    int timeArr[26] = {
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9,
        10, 10, 10, 10
    };
    string word;
    cin >> word;

    int time = 0;
    for (char c : word) {
        time += timeArr[c-'A'];
    }

    cout << time << "\n";

    return 0;
}