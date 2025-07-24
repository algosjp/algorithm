#include <iostream>

using namespace std;

int main() {
    bool studentArr[31] = {false};
    int n;
    
    for (int i=0; i<28; i++) {
        cin >> n;
        studentArr[n] = true;
    }

    for (int i=1; i<31; i++) {
        if (!studentArr[i]) {
            cout << i << "\n";
        }
    }
    
    return 0;
}