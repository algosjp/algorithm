#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int comp = 1, l = word.length();

    for (int i=0; i<l; i++) {
        if (word[i] != word[l-i-1]) {
            comp = 0;
            break;
        }
    }

    cout << comp << "\n";

    return 0;
}