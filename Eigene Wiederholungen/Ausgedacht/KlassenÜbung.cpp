#include <iostream>

using namespace std;

class Item {
    protected:
        string title;
        int year;
    public:
        Item (string title, int year)
            : title(title), year(year) {
            //...
        }

        virtual ~Item() { 
            cout << "Item gelöscht." << endl;
        }

        void virtual display() {
            cout << "Title: " << title << ", Erscheinungsjahr: " << year << endl;
        }

        void test() {
            cout << "Test für Vererbung" << endl;
        }

        bool operator==(const Item &item) {
            return this->title == item.title;
        }

        friend void showPrivateDetails(const Item &item);
};

class Book : public Item {
    private:
        string author;
        int pages;
    public:
        Book(string title, int year, string author, int pages)
            : Item(title, year), author(author), pages(pages) {
            //...
        }
        void display() override {
            cout << "Title: " << title << ", Erscheinungsjahr: " << year << ", Author: " << author << ", Seiten: " << pages << endl;
        }
};

class DVD : public Item {
    private: 
        int duration;
        string genre;
    public:
        DVD(string title, int year, int duration, string genre)
            : Item(title, year), duration(duration), genre(genre) {
            //...
        }
        void display() override {
            cout << "Title: " << title << ", Erscheinungsjahr: " << year << ", Länge: " << duration << ", Genre: " << genre << endl;
        }
};

class Bibliothek {
    private:
        static int itemCount;
    public:
        
};

void showPrivateDetails(const Item &item) {
    cout << "Title: " << item.title << endl;
};

int main(int argc, char const *argv[]) {
    
    Book book1("Fick dich", 2003, "Deine Mam", 29838293);
    Book book2("Fick dich", 2004, "Deine Mam", 29838291);

    if (book1 == book2) {
        cout << "Hurrah" << endl;
    } else {
        cout << "Was anderes" << endl;
    }

    return 0;
}
