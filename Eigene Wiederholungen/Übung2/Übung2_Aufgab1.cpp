#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int sum = 0;

    for (size_t i = 0; i < argc; i++) {
        sum += *argv[i] - '0';
    }
    
    cout << sum << endl;

    return 0;
}
