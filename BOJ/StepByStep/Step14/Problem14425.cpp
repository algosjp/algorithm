#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    map<string, bool> S;
    string str;
    for (int i=0; i<N; i++) {
        cin >> str;
        S[str] = true;
    }

    int cnt = 0;
    for (int i=0; i<M; i++) {
        cin >> str;
        if (S.find(str) != S.end()) {
            cnt += 1;
        }
    }

    cout << cnt << "\n";

    return 0;
}