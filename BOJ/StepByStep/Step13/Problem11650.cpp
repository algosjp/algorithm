#include <iostream>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

int main() {
    int N;
    cin >> N;

    pair<int, int> numArr[N];
    for (int i=0; i<N; i++) {
        cin >> numArr[i].first >> numArr[i].second;
    }

    sort(numArr, numArr+N, compare);

    for (int i=0; i<N; i++) {
        cout << numArr[i].first << " " << numArr[i].second << "\n";
    }
    
    return 0;
}

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    else if (a.first == b.first) {
        return a.second < b.second;
    }
}