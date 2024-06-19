#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Card
{
private:
 	long	cardNumber;		//Номер картки
	char	name[50];		// Ім’я власника
	char	expiredDate[6]; // Дата дії
	int		PIN;			// Код картки
	double	cash;			//Сума грошей на картці

public:
	Card(); //Конструктор за замовчуванням
	Card(const char* name, double	cash); //Конструктор з параметрами
	~Card(); //Деструктор

	void showInfo();
};

