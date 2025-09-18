#include <iostream>

using namespace std;

struct Przedmiot {
    string nazwa;
    float cena;
    Przedmiot* next;
};

Przedmiot* usun(Przedmiot* head, string doUsuniecia)
{
    Przedmiot* temp = head;
    Przedmiot* poprzedni = head;
    while(temp != NULL)
    {
        if(temp->nazwa == doUsuniecia)
        {
            if(temp == head)
            {
                head=head->next;
                temp->next;
                delete temp;
            }
            else
            {
                poprzedni->next = temp->next;
                temp->next;
                delete temp;
            }

        }
        else
        {
            temp = temp->next;
            poprzedni = poprzedni->next;
        }
    }
}

int main() {
    Przedmiot* head = NULL;
    Przedmiot* tail = NULL;
    char tn;
    string nazwaPrzedmiotu;

    do {
        Przedmiot* nowy = new Przedmiot();
        cout << "Podaj nazwe przedmiotu: ";
        cin >> nowy->nazwa;
        cout << "Podaj cene przedmiotu: ";
        cin >> nowy->cena;
        nowy->next = NULL;

        if (head == NULL)
        {
            head = nowy;
            tail = nowy;
        }
        else
        {
            tail->next = nowy;
            tail = nowy;
        }

        cout << "Czy chcesz wprowadzic kolejny przedmiot?: ";
        cin >> tn;
    }
    while (tn == 'T' || tn == 't');

    cout << "Lista przedmiotow: "<< endl;
    Przedmiot* temp = head;
    while (temp != NULL) {
        cout << "Nazwa: " << temp->nazwa << ", Cena: " << temp->cena << endl;
        temp = temp->next;
    }

    cout << "Przedmiot o jakiej nazwie chcesz usunac? ";
    cin>>nazwaPrzedmiotu;
    head = usun(head,nazwaPrzedmiotu);

    cout << "Lista przedmiotow po usunieciu: " << endl;
    while (temp != NULL) {
        cout << "Nazwa: " << temp->nazwa << ", Cena: " << temp->cena << endl;
        temp = temp->next;
    }

    return 0;
}
