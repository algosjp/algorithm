#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int command, X;
    vector<int> stack;
    for (int i=0; i<N; i++) {
        cin >> command;

        if (command == 1) {
            cin >> X;
            stack.push_back(X);
        }
        else if (command == 2) {
            if (stack.size() > 0) {
                cout << stack.back() << "\n";
                stack.pop_back();
            }
            else if (stack.empty()) {
                cout << -1 << "\n";
            }
        }
        else if (command == 3) {
            cout << stack.size() << "\n";
        }
        else if (command == 4) {
            if (stack.empty()) {
                cout << 1 << "\n";
            }
            else if (stack.size() > 0) {
                cout << 0 << "\n";
            }
        }
        else if (command == 5) {
            if (stack.size() > 0) {
                cout << stack.back() << "\n";
            }
            else if (stack.empty()) {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}