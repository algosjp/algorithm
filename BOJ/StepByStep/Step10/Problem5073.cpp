#include <iostream>

using namespace std;

int main() {
    int sideA, sideB, sideC;

    while (true) {
        cin >> sideA >> sideB >> sideC;
        
        if (sideA == 0 && sideB == 0 && sideC == 0) {
            break;
        }

        string triangleType;
        if (2*max(max(sideA, sideB), sideC) >= sideA+sideB+sideC) {
            triangleType = "Invalid";
        }
        else if (sideA == sideB && sideB == sideC) {
            triangleType = "Equilateral";
        }
        else if (sideA == sideB || sideB == sideC || sideC == sideA) {
            triangleType = "Isosceles";
        }
        else if (sideA != sideB && sideB != sideC && sideC != sideA) {
            triangleType = "Scalene";
        }

        cout << triangleType << "\n";
    }

    return 0;
}