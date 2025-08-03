#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b);

int main() {
    int N;
    cin >> N;

    string strArr[N];
    for (int i=0; i<N; i++) {
        cin >> strArr[i];
    }

    sort(strArr, strArr+N, compare);

    cout << strArr[0] << "\n";
    for (int i=1; i<N; i++) {
        if (strArr[i-1] != strArr[i]) {
            cout << strArr[i] << "\n";
        }
    }

    return 0;
}

bool compare(string a, string b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    else if (a.length() == b.length()) {
        return a < b;
    }
}