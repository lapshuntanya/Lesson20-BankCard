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
	return 0;
}

void Card::setName(const char* client)
{
}

const char* Card::getName()
{
	return nullptr;
}

void Card::setExpiredDate(const char* date)
{
}

const char* Card::getExpiredDate()
{
	return nullptr;
}

void Card::setPIN(int oldPIN, int newPIN)
{
}

int Card::getPIN()
{
	return 0;
}

double Card::getCash()
{
	return 0.0;
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
