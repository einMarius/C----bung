#include <iostream>

using namespace std;

/**
 * 
 * y
 * b = y + 1
 * r = b + 1
 * 
 */

void findBiggestPossibility(int y, int b, int r) {
    y = min(y, min(b - 1, r - 2));
    b = y+1;
    r = b+1;

    cout << y+b+r << endl;
}

int main(int argc, char const *argv[]) {
    
    int yellow, blue, red;
    cin >> yellow >> blue >> red;

    findBiggestPossibility(yellow, blue, red);

    return 0;
}
