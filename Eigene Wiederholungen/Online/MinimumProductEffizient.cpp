#include <iostream>
#include <algorithm> // Für std::min und std::max

using namespace std;

long long calculateMinProduct(int a, int b, int x, int y, int n) {
    // Fall 1: Reduziere a zuerst
    int reduce_a = min(n, a - x);
    int new_a1 = a - reduce_a;
    int remaining_n1 = n - reduce_a;
    int new_b1 = max(b - remaining_n1, y);
    long long product1 = (long long)new_a1 * new_b1;

    // Fall 2: Reduziere b zuerst
    int reduce_b = min(n, b - y);
    int new_b2 = b - reduce_b;
    int remaining_n2 = n - reduce_b;
    int new_a2 = max(a - remaining_n2, x);
    long long product2 = (long long)new_a2 * new_b2;

    // Gib das kleinere Produkt zurück
    return min(product1, product2);
}

int main() {
    int testfalle;
    cin >> testfalle;

    while (testfalle--) {
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        cout << calculateMinProduct(a, b, x, y, n) << endl;
    }

    return 0;
}
