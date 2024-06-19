#include "Card.h"
#include <ctime>

int main()
{
    srand(time(0));

    Card* mono = nullptr;

    bool user;
    cout << "0 - Standart card\n";
    cout << "1 - VIP card\n";
    cin >> user;
    if (user == false) mono = new Card();
    else mono = new Card("Lapshun Tetiana", 25'000);

    mono->showInfo();

    cout << "\n\n======================================\n";
    int a, b;
    cout << "Input old PIN: "; cin >> a;
    cout << "Input new PIN: "; cin >> b;
    mono->setPIN(a, b);
    cout << "\nCard: " << mono->getCardNumber() << " PIN: " << mono->getPIN() << "\n";

    cout << "\n\n======================================\n";

    delete mono;
}

