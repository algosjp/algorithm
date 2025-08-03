#include <iostream>
#include <algorithm>

using namespace std;

bool descending(char a, char b);

int main() {
    string N;
    cin >> N;

    sort(N.begin(), N.end(), descending);

    cout << N << "\n";

    return 0;
}

bool descending(char a, char b) {
    return a > b;
}