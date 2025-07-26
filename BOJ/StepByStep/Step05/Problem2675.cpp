#include <iostream>

using namespace std;

int main() {
    int T, R;
    cin >> T;
    string S;

    for (int i=0; i<T; i++) {
        cin >> R >> S;
        for (char s : S) {
            for (int j=0; j<R; j++) {
                cout << s;
            }
        }
        cout << "\n";
    }
    
    return 0;
}