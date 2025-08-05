#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    map<string, bool> Nmap, Mmap;
    string name;
    for (int i=0; i<N; i++) {
        cin >> name;
        Nmap[name] = true;
    }
    
    int cnt = 0;
    for (int i=0; i<M; i++) {
        cin >> name;
        Mmap[name] = true;

        if (Nmap.find(name) != Nmap.end()) {
            cnt += 1;
        }
    }

    cout << cnt << "\n";
    for (auto [key, value] : Nmap) {
        if (Mmap.find(key) != Mmap.end()) {
            cout << key << "\n";
        }
    }

    return 0;
}