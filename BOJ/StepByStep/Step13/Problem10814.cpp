#include <iostream>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b);

int main() {
    int N;
    cin >> N;
    
    pair<int, string> member[N];
    for (int i=0; i<N; i++) {
        cin >> member[i].first >> member[i].second;
    }

    stable_sort(member, member+N, compare);

    for (int i=0; i<N; i++) {
        cout << member[i].first << " " << member[i].second << "\n";
    }

    return 0;
}

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}