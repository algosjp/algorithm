#include <iostream>

using namespace std;

bool haveCard[20000001] = {false};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    cin >> N;

    int card;
    for (int i=0; i<N; i++) {
        cin >> card;
        haveCard[card+10000000] = true;
    }

    cin >> M;
    for (int i=0; i<M; i++) {
        cin >> card;
        if (haveCard[card+10000000]) {
            cout << 1 << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
    cout << "\n";

    return 0;
}