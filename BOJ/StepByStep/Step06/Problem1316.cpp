#include <iostream>

using namespace std;

bool checkGroup(string word);

int main() {
    int N;
    cin >> N;
    string word;

    int cnt = 0;
    for (int i=0; i<N; i++) {
        cin >> word;
        if (checkGroup(word)) {
            cnt += 1;
        }
    }

    cout << cnt << "\n";

    return 0;
}

bool checkGroup(string word) {
    bool check[26] = {false};
    char prev;
    
    for (char c : word) {
        int idx = c-'a';
        if (!check[idx]) {
            check[idx] = true;
            prev = c;
        }
        else {
            if (prev != c) {
                return false;
            }
        }
    }

    return true;
}