#include <iostream>
#include <vector>

using namespace std;

int ggT(int a, int b) {
    if (b == 0) {
        return a;  // Wenn b = 0, ist a der GGT
    }
    return ggT(b, a % b);  // Rekursiver Aufruf
}

bool ggtEqOne(int a, int b) {
    int ggt = ggT(a, b);

    return (ggt == 1);
}

int main(int argc, char const *argv[]) {
    
    const int x = 10, y = 10;
    bool matrix[x][y];

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            cout << matrix[i][j] << ", ";
        }
        cout << endl;
    }
    
    cout << "-------------------------" << endl;

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            matrix[i][j] = ggtEqOne(i, j);
            cout << matrix[i][j] << ", ";
        }
        cout << endl;
    }

    return 0;
}
