#include <iostream>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    string reverseA = "", reverseB = "";
    for (int i=2; i>-1; i--) {
        reverseA += A[i];
        reverseB += B[i];
    }

    string biggerNum;
    if (reverseA >= reverseB) {
        biggerNum = reverseA;
    }
    else if (reverseA < reverseB) {
        biggerNum = reverseB;
    }

    cout << biggerNum << "\n";
    
    return 0;
}