#include <iostream>
using namespace std;

struct Osoba {
    string nazwisko;
    int wiek;
    Osoba *next;
};

int main() {
    Osoba *head = NULL;
    Osoba *nowy = new Osoba;

    cout << "Podaj nazwisko: ";
    cin >> nowy->nazwisko;
    cout << "Podaj wiek: ";
    cin >> nowy->wiek;

    nowy->next = head;
    head = nowy;

    Osoba *temp = head;
    while (temp != NULL) {
        cout << "Nazwisko: " << temp->nazwisko << ", Wiek: " << temp->wiek << endl;
        temp = temp->next;
    }

    return 0;
}
