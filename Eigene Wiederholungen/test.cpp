#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    
    int test = 3;

    int *zeigerAufTest = &test;

    cout << zeigerAufTest << endl;
    
    return 0;
}
