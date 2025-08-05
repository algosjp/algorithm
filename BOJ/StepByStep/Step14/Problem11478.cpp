#include <iostream>
#include <map>

using namespace std;

int main() {
    string S;
    cin >> S;

    map<string, int> subMap;
    int l = S.length();
    string subString;
    for (int i=0; i<l; i++) {
        subString = "";
        for (int j=i; j<l; j++) {
            subString += S[j];
            subMap[subString] += 1;
        }
    }

    int subCnt = 0;
    for (auto [key, value] : subMap) {
        subCnt += 1;
    }

    cout << subCnt << "\n";

    return 0;
}