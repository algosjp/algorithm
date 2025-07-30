#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int minX = 10001, maxX = -10001, minY = 10001, maxY = -10001; 
    int x, y;
    for (int i=0; i<N; i++) {
        cin >> x >> y;
        if (minX > x) {
            minX = x;
        }
        if (maxX < x) {
            maxX = x;
        }
        if (minY > y) {
            minY = y;
        }
        if (maxY < y) {
            maxY = y;
        }
    }

    cout << (maxX-minX)*(maxY-minY) << "\n";
    
    return 0;
}