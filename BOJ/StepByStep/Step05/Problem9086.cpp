﻿#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    string str;

    for (int i=0; i<T; i++) {
        cin >> str;
        cout << str[0] << str[str.length()-1] << "\n";
    }
    
    return 0;
}