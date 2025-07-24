#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int score[N];
    for (int i=0; i<N; i++) {
        cin >> score[i];
    }

    double max = 0, avg = 0;
    for (int s : score) {
        if (s > max) {max = s;}
        avg += s;
    }
    avg /= N;
    avg *= 100/max;

    cout.precision(5);
    cout << avg << "\n";

    return 0;
}