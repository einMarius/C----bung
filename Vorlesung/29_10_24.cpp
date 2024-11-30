#include <iostream>
#include <cstdint>
#include <limits>

#define LIMIT 10000
#define F(x) 2*x-1

using namespace std;

int z = -27;
void dec() {
        z--;
}

int main(int argc, char const *argv[]) {
    
    for (unsigned char c = 0; c < 255; c++){ //signed char c würd eine endlos-Schleife erzeugen, weil c nicht bis 255 kommt
        cout << "Der Wert vn " << c << " ist " << int(c) << endl;
    }

    char *cstr = "ÄÖUßäöü";
    string str = "ÄÖÜßäöü"s;
    string u8str = u8"ÄÖÜßäöü"s;
    wchar_t *wstr = L"ÄÖÜßäöü";
    cout << cstr << endl << str << endl << u8str << endl << wstr << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<char>::is_signed << endl;
    
    int8_t ein_byte_int;
    int16_t zwie_byte_int;
    int64_t acht_byte_int;

    int_least16_t mind_zwei_byte;
    int_least32_t mind_vier_byte;
    int_fast32_t schnellstes_int_mit_vier_byte;

    cout << sizeof(ein_byte_int) << " "
        << sizeof(zwie_byte_int) << " "
        << sizeof(int64_t) << " "
        << sizeof(mind_zwei_byte) << " "
        << sizeof(int_least32_t) << " "
        << sizeof(int_fast32_t) << endl;

    int x = 7;

    {
        int x = 10;
        cout << x << endl;

    }

    for (size_t i = 0; i < 3; i++, dec());

    cout << ++z << x << endl;

    return EXIT_SUCCESS;
}
