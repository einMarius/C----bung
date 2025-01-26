#include <iostream>

using namespace std;

void swapi(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[]) {

    int x = 5, y = 3;

    swapi(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}
