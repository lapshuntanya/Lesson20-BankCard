#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card
{
private:
 	unsigned long	cardNumber;		//Номер картки
	char	name[50];		// Ім’я власника
	char	expiredDate[6]; // Дата дії
	int		PIN;			// Код картки
	double	cash;			//Сума грошей на картці

public:
	Card(); //Конструктор за замовчуванням
	Card(const char* name, double	cash); //Конструктор з параметрами
	~Card(); //Деструктор

	// --------- Аксесори --------
	unsigned long getCardNumber();
	void setName(const char* client);
	const char* getName();
	void setExpiredDate(const char* date);
	const char* getExpiredDate();
	void setPIN(int oldPIN, int newPIN);
	int getPIN();
	double getCash();

	//------------- Інші методи ------- 
	void showInfo();
	void topupCash(int pin, double money); //Поповнення картки
	void withdrawCash(int pin, double money); //Зняття коштів
};

