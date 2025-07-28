#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrixA[N][M], matrixB[N][M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> matrixA[i][j];
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> matrixB[i][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << matrixA[i][j] + matrixB[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}