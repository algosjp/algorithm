#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;
    int alphaArr[26] = {0};
    
    for (char c : input) {
        if ('a' <= c && c <= 'z') {
            alphaArr[c-'a'] += 1;
        }
        else if ('A' <= c && c <= 'Z') {
            alphaArr[c-'A'] += 1;
        }
    }

    string mostCommon;
    int max = 0;
    for (int i=0; i<26; i++) {
        if (alphaArr[i] > max) {
            max = alphaArr[i];
            mostCommon = 'A'+i;
        }
        else if (alphaArr[i] == max) {
            mostCommon = "?";
        }
    }

    cout << mostCommon << "\n";

    return 0;
}