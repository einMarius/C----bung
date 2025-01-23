#include <iostream>

using namespace std;

int ggT(int a, int b) {
    
    if(b == 0) return a;

    return ggT(b, a%b);
}

int main(int argc, char const *argv[]) {
    
    const int x = 5, y = 6;
    int array[x][y] = {0};

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            if(ggT(i, j) == 1) array[i][j] = true;    
        }
    }
    
    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            cout << array[i][j];
        }
        cout << endl;
    }
    

    return 0;
}
