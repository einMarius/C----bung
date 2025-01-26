#include <iostream>

using namespace std;

#define QUADRAT(x) ((x) * (x))

constexpr int quadrat(int x) {
    return x*x;
};

int main(int argc, char const *argv[]) {
    
    int x = 5;
    int x2 = QUADRAT(5);
    int x3 = quadrat(x);

    cout << x2 << endl;
    cout << x3 << endl;

    return 0;
}
