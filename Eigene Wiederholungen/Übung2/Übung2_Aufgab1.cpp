#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int length;
    cin >> length;

    int value = argc;
    int sum = 0;
    for (size_t i = 0; i < value; i++) {
        sum += *argv[i] - '0';
    }
    
    cout << sum << endl;

    return 0;
}
