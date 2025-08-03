#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int numArr[10001] = {0};
    int num;
    for (int i=0; i<N; i++) {
        cin >> num;
        numArr[num] += 1;
    }

    for (int i=1; i<10001; i++) {
        for (int j=0; j<numArr[i]; j++) {
            cout << i << "\n";
        }
    }
    
    return 0;
}