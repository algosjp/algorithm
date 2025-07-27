#include <iostream>

using namespace std;

int main() {
    int chessArr[6] = {
        1, 1, 2, 2, 2, 8
    };
    int pieceCnt;

    for (int i=0; i<6; i++) {
        cin >> pieceCnt;
        chessArr[i] -= pieceCnt;
    }

    for (int piece : chessArr) {
        cout << piece << " ";
    }
    cout << "\n";
     
    return 0;
}