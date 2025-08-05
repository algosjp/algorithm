#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    map<int, int> cards;
    int card;
    for (int i=0; i<N; i++) {
        cin >> card;
        cards[card] += 1;
    }

    int M;
    cin >> M;
    for (int i=0; i<M; i++) {
        cin >> card;
        if (cards.find(card) != cards.end()) {
            cout << cards[card] << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
    cout << "\n";

    return 0;
}