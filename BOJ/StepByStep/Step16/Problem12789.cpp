#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> waitline;
    int target = 1, ticket;
    while (true) {
        while(!waitline.empty() && waitline.back() == target) {
            waitline.pop_back();
            target += 1;
        }

        if (target > N) {
            break;
        }

        cin >> ticket;

        if (ticket == target) {
            target += 1;
        }
        else {
            if (!waitline.empty() && waitline.back() < ticket) {
                cout << "Sad" << "\n";
                return 0;
            }

            waitline.push_back(ticket);
        }
    }

    cout << "Nice" << "\n";

    return 0;
}