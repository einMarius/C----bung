#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int n;
    cin >> n;

    double nenner = 1;
    for (size_t i = n; i > 0; i--){
        nenner *= (double) (365-i+1)/365;
    }
    
    cout << (double) 1-nenner << endl;

    return 0;
}
