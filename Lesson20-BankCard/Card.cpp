#include "Card.h"

Card::Card()
{
	cardNumber = rand() + 10'000;
	strcpy_s(name, 50, "undefined");
	strcpy_s(expiredDate, 6, "01.34");
	PIN = rand() % 9000 + 1'000;
	cash = 0;
	cout << "Opened STANDART card: " << cardNumber << endl;
}

Card::Card(const char* name, double cash)
{
	cardNumber = rand() + 10'000;
	strcpy_s(this->name, 50, name); // !!!!!!!!!!!!
	strcpy_s(expiredDate, 6, "01.34");
	PIN = rand() % 9000 + 1'000;
	this->cash = cash;// !!!!!!!!!!!!
	cout << "Opened VIP card: " << cardNumber << endl;
}

Card::~Card(){
	cout << "Closed " << cardNumber << endl;
}

unsigned long Card::getCardNumber()
{
	return cardNumber;
}

void Card::setName(const char* client)
{
	if (strlen(client) >= 3) {
		strcpy_s(name, 50, client);
	}
	else
		cout << "Error: name is too small\n";
}

const char* Card::getName(){
	return name;
}

void Card::setExpiredDate(const char* date){
	int year = atoi(date + 3);
	if (year > 24) {
		strcpy_s(expiredDate, 6, date);
	}
	else
		cout << "Error: date is past\n";
}

const char* Card::getExpiredDate(){
	return expiredDate;
}

void Card::setPIN(int oldPIN, int newPIN){
	if (PIN == oldPIN) {
		PIN = newPIN;
	}
	else 	cout << "Error: PIN is wrong\n";
}

int Card::getPIN(){
	return PIN;
}

double Card::getCash(){
	return cash;
}

void Card::showInfo(){
	cout << "+++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "|\tCard:   " << cardNumber << endl;
	cout << "|\tClient: " << name << endl;
	cout << "|\tCash:   " << cash << " UAH" << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "|\tExp date: " << expiredDate << endl;
	cout << "|\tPIN:      " << PIN << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++\n\n";
}
