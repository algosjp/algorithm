#include <iostream>
#include <vector>

using namespace std;

bool isVPS(string line);

int main() {
    string line;
    while (true) {
        getline(cin, line);

        if (line == ".") {
            break;
        }

        if (isVPS(line)) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }

    return 0;
}

bool isVPS(string line) {
    vector<char> stack;
    for (char c : line) {
        if (c == '(') {
            stack.push_back(c);
        }
        else if (c == '[') {
            stack.push_back(c);
        }
        else if (c == ']') {
            if (stack.empty()) {
                return false;
            }
            if (stack.empty() || stack.back() != '[') {
                return false;
            }

            stack.pop_back();
        }
        else if (c == ')') {
            if (stack.empty() || stack.back() != '(') {
                return false;
            }

            stack.pop_back();
        }
    }

    return stack.empty();
}