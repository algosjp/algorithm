﻿#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int quad;
    if (x > 0 && y > 0) {quad = 1;}
    else if (x < 0 && y > 0) {quad = 2;}
    else if (x < 0 && y < 0) {quad = 3;}
    else if (x > 0 && y < 0) {quad = 4;}
    
    cout << quad << "\n";

    return 0;
}