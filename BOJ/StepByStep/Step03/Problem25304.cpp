﻿#include <iostream>

using namespace std;

int main() {
    int X, N, a, b;
    cin >> X >> N;

    for (int i=0; i<N; i++) {
        cin >> a >> b;
        X -= a*b;
    }

    string comp;
    if (X == 0) {comp = "Yes";}
    else if (X != 0) {comp = "No";}

    cout << comp << "\n";

    return 0;
}