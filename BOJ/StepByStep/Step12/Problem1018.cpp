#include <iostream>

using namespace std;

int cntFalse(int startX, int startY, const string boardA[8], const string boardB[8], const string boardArr[]);

int main() {
    int N, M;
    cin >> N >> M;
    
    string boardA[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };
    string boardB[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };
    
    string boardArr[N];
    for (int i=0; i<N; i++) {
        cin >> boardArr[i];
    }

    int minCnt = 64;
    for (int x=0; x<N-7; x++) {
        for (int y=0; y<M-7; y++) {
            minCnt = min(minCnt, cntFalse(x, y, boardA, boardB, boardArr));
        }
    }

    cout << minCnt << "\n";

    return 0;
}

int cntFalse(int startX, int startY, const string boardA[8], const string boardB[8], const string boardArr[]) {
    int cntA = 0, cntB = 0;

    for (int dx=0; dx<8; dx++) {
        for (int dy=0; dy<8; dy++) {
            if (boardA[dx][dy] != boardArr[startX+dx][startY+dy]) {
                cntA += 1;
            }
            if (boardB[dx][dy] != boardArr[startX+dx][startY+dy]) {
                cntB += 1;
            }
        }
    }

    return min(cntA, cntB);
}