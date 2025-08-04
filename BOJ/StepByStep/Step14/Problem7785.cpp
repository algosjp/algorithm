#include <iostream>
#include <map>

using namespace std;

bool descending(const string& a, const string& b);

int main() {
    int n;
    cin >> n;

    map<string, bool, bool (*)(const string& a, const string& b)> member(descending);
    string name, state;
    for (int i=0; i<n; i++) {
        cin >> name >> state;
        if (state == "enter") {
            member[name] = true;
        }
        else if (state == "leave") {
            member[name] = false;
        }
    }

    for (auto [name, state] : member) {
        if (state) {
            cout << name << "\n";
        }
    }

    return 0;
}

bool descending(const string& a, const string& b) {
    return a > b;
}