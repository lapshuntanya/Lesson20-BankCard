#include "Card.h"

int main()
{
    Card* mono = nullptr;

    bool user;
    cout << "0 - Standart card\n";
    cout << "1 - VIP card\n";
    cin >> user;
    if (user == false) mono = new Card();
    else mono = new Card("Lapshun Tetiana", 25'000);

    mono->showInfo();

    delete mono;
}

