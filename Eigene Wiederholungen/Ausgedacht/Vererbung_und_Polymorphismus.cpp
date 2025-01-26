#include <iostream>

using namespace std;

class Tier {
public:
    virtual void sprich() { cout << "Ein Tier macht Geräusche." << endl; }
};

class Hund : public Tier {
public:
    void sprich() override { cout << "Wuff!" << endl; }
};

class Katze : public Tier {
    public:
        void sprich() override { cout << "Miau!" << endl; }
};

int main(int argc, char const *argv[]) {
    
    

    return 0;
}
