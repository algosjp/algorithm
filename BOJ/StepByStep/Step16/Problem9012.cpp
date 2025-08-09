#include <iostream>

using namespace std;

bool isVPS(string PS);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;

    string PS;
    for (int i=0; i<T; i++) {
        cin >> PS;
        
        if (isVPS(PS)) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}

bool isVPS(string PS) {
    int ps = 0;
    for (char c : PS) {
        if (c == '(') {
            ps += 1;
        }
        else if (c == ')') {
            ps -= 1;
        }

        if (ps < 0) {
            return false;
        }
    }

    if (ps != 0) {
        return false;
    }

    return true;
}