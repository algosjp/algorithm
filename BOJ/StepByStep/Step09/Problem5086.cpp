#include <iostream>

using namespace std;

int main() {
    int first, second;

    string rel;
    while (true) {
        cin >> first >> second;
        
        if (first == 0 && second == 0) {
            break;
        }

        if (second%first == 0) {
            rel = "factor";
        }
        else if (first%second == 0) {
            rel = "multiple";
        }
        else {
            rel = "neither";
        }
        cout << rel << "\n";
    }

    return 0;
}