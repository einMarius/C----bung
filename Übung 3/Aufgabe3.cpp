#include <iostream>

using namespace std;

int ggT(int a, int b) {

    if(a % b == 0) {
        return b;
    } else 
        ggT(b, a%b);
    
}

bool ggtEqOne(int a, int b) {

    if(ggT(a, b) == 1) {
        return true;
    } else 
        return false;

}

int main(int argc, char const *argv[]) {
    
    cout << ggT(5, 5) << endl;
    cout << ggtEqOne(5, 5) << endl;
    bool tes = false;
    cout << tes << endl;

    int a, b;

    cout << "Gib zwei Zahlen an fuer die zweidimensionale Matrix an: ";
    cin >> a >> b;
    cout << endl;

    bool matrix[a][b];

    for (size_t i = 0; i < a; i++) {
        cout << i << endl;
        for (size_t j = 0; j < b; j++) {
            cout << j << endl;
            matrix[i][j] = ggtEqOne(i, j);  
        }
    }

    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cout << matrix [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
