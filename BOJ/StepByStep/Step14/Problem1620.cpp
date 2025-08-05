#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;

    map<string, string> num2poke, poke2num;
    string pokeName, idx;
    for (int i=1; i<N+1; i++) {
        cin >> pokeName;
        idx = to_string(i);
        num2poke[idx] = pokeName;
        poke2num[pokeName] = idx;
    }

    string quiz;
    for (int i=0; i<M; i++) {
        cin >> quiz;
        if (!isdigit(quiz[0])) {
            cout << poke2num[quiz] << "\n";
        }   
        else if (isdigit(quiz[0])) {
            cout << num2poke[quiz] << "\n";
        }
    }

    return 0;
}