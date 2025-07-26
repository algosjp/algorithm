#include <iostream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    int startIdx = -1, endIdx = -1;
    bool flag = true;
    for (int i=0; i<input.length(); i++) {
        if (input[i] != ' ') {
            if (flag) {
                startIdx = i;
                flag = false;
            }
            endIdx = i;
        }
    }

    if (startIdx == -1 || endIdx == -1) {
        cout << 0 << "\n";
        return 0;
    }
    
    int cnt = 1;
    for (int i=startIdx; i<endIdx+1; i++) {
        if (input[i] == ' ') {
            cnt += 1;
        }
    }

    cout << cnt << "\n";

    return 0;
}