#include <iostream>

using namespace std;

int main() {
    char matrix[5][15] = {'\0'};
    string row;
    for (int i=0; i<5; i++) {
        cin >> row;
        for (int j=0; j<row.length(); j++) {
            matrix[i][j] = row[j];
        }
    }
    
    for (int col=0; col<15; col++) {
        for (int row=0; row<5; row++) {
            if (matrix[row][col] != '\0') {
                cout << matrix[row][col];
            }
        }
    }
    cout << "\n";

    return 0;
}