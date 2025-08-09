#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;

    vector<int> stack;
    int n;
    for (int i=0; i<K; i++) {
        cin >> n;

        if (n == 0) {
            stack.pop_back();
        }
        else {
            stack.push_back(n);
        }
    }

    int sum = 0;
    for (int n : stack) {
        sum += n;
    }

    cout << sum << "\n";
    
    return 0;
}