﻿#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=1; i<N; i++) {
        for (int j=0; j<N-i; j++) {
            cout << " ";
        }
        for (int k=0; k<2*i-1; k++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i=0; i<2*N-1; i++) {
        cout << "*";
    }
    cout << "\n";
    for (int i=N-1; i>-1; i--) {
        for (int j=0; j<N-i; j++) {
            cout << " ";
        }
        for (int k=0; k<2*i-1; k++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}