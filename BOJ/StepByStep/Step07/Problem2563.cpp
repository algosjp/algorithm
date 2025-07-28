#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    int x, y;
    int matrix[110][110] = {0};
    for (int i=0; i<T; i++) {
        cin >> x >> y;
        for (int dx=0; dx<10; dx++) {
            for (int dy=0; dy<10; dy++) {
                matrix[x+dx][y+dy] = 1;
            }
        }
    }

    int area = 0;
    for (int i=0; i<100; i++) {
        for (int j=0; j<100; j++) {
                area += matrix[i][j];
        }
    }
    
    cout << area << "\n";

    return 0;
}