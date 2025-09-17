#include <iostream>

using namespace std;

struct Osoba{
string nazwisko;
int wiek;
Osoba *next;



};

int main()
{
Osoba *head = NULL;
Osoba *nowy;
char d;
do{
nowy = new Osoba;
cout << "podaj nazwisko" << endl;
cin >> nowy->nazwisko;
cout << "podaj wiek " << endl;
cin >> nowy->wiek;
nowy->next=head;
head=nowy;
cout << "Czy chcesz wprowadzic nowy element do listy? (T/N)" << endl;
cin>>d;
}
while(d=='t');
 cout << "otrzymana lista:" << endl;
 Osoba *temp;
 temp=head;

 while(temp!=NULL){
 cout << temp->nazwisko << " "<<temp->wiek << endl;
 temp = temp->next;
 }
    return 0;
}

