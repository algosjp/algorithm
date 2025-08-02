#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = -1;
    bool flag = false;
    for (int i=1000; i>-1; i--) {
        for (int j=0; j<1001; j++) {
            if (5*i+3*j == N) {
                cnt = i + j;
                flag = true;
                break;
            }
        }
        
        if (flag) {
            break;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}