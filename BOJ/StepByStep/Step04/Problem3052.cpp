#include <iostream>

using namespace std;

int main() {
    bool remainArr[42] = {false};
    int n;

    for (int i=0; i<10; i++) {
        cin >> n; 
        remainArr[n%42] = true;
    }

    int cnt = 0;
    for (bool comp : remainArr) {
        if (comp) {cnt += 1;}
    }

    cout << cnt << "\n";

    return 0;
}