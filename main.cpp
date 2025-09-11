#include <iostream>
using namespace std;

struct Osoba {
    string nazwisko;
    int wiek;
    Osoba *next;
};

int main() {
    Osoba *head = nullptr;
    Osoba *nowy = new Osoba;

    cout << "Podaj nazwisko: ";
    cin >> nowy->nazwisko;
    cout << "Podaj wiek: ";
    cin >> nowy->wiek;

    cout << "Czy chcesz wprowadzic jeszcze jeden element do listy" <<endl;
    nowy->next = head;
    head = nowy;

    return 0;
}
