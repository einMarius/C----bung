#include <iostream>
#include <cstdint>
#include <vector>

#include <string>
#include <string.h>

using namespace std;

double square(double d) { return d*d; }

char next_char(char c) { return ++c; }

int main(int argc, char const *argv[]) {

    char s;
    for(char c = 'A'; c <= 'Z';){
        cout << c;
        c = next_char(c);
        s = c;
    }
    cout << "\n";

    cout << "Last char: " << s << endl; 

    /*
    //auto x = 3.5;
    double z = 2;
    //x hat jetzt den gleichen wert wie z
    decltype(square(z)) x = square(z);

    cout << x << endl;
    */


    /* 
    string s {"Ein \0String."};
    cout << s << endl;

    //Nur durch anhängen von \0 wird rest glaub ich abgeschnitten
    //char c[] = {'a', 'b', 'c', '\0'};
    char c[] = "ab\0c";
    auto cs = "Ein C-String";

    cout << cs << strlen(cs) << endl;
    cout << c << sizeof(c) << endl;
    */

    /*
    double d = 2.5;
    int_fast32_t var = {123};
    int_least32_t var2 = d;

    cout << var << ", " << var2 << endl;


    vector<int> v {3,2,1};

    for(auto x : v) cout << x << " ";
    cout << endl;
    */

    return 0;
}
