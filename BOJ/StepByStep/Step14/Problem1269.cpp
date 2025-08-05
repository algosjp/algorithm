#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int Asize, Bsize;
    cin >> Asize >> Bsize;

    map<int, bool> A, B;
    int element;
    for (int i=0; i<Asize; i++) {
        cin >> element;
        A[element] = true;
    }
    for (int i=0; i<Bsize; i++) {
        cin >> element;
        B[element] = true;
    }

    int interCnt = 0;
    for (auto [key, value] : A) {
        if (B.find(key) != B.end()) {
            interCnt += 1;
        }
    }

    cout << Asize+Bsize-2*interCnt << "\n";
    
    return 0;
}