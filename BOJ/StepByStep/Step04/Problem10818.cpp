#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int numArr[N];
    for (int i=0; i<N; i++) {
        cin >> numArr[i];
    }

    int min = 1000001, max = -1000001;
    for (int num : numArr) {
        if (num < min) {min = num;}
        if (num > max) {max = num;}
    }
    
    cout << min << " " << max << "\n";

    return 0;
}