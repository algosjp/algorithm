#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;
    int alphArr[26];
    for (int i=0; i<26; i++) {
        alphArr[i] = -1;
    }

    for (int i=0; i<S.length(); i++) {
        int idx = S[i]-'a';
        if (alphArr[idx] == -1) {
            alphArr[idx] = i;
        }
    }

    for (int i : alphArr) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}