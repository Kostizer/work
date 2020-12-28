#ifndef INCOME_H    
#define INCOME_H   
#include <string> 


using namespace std;
class Income //Класс заработка
{
private:
	string flower; //название цветка
	float costOfFlower; //цена цветка
	float costOfService; //цена услуги
	string dateOfPayment;//дата оплаты
public:
	Income(string, float, float, string);
	string getFlower();	//получить название цветка
	float getCostOfFlower(); //получить цену цветка
	float getCostOfService(); //получить цену услуги
	string getDateOfPayment(); //получить дату оплаты
};
#endif
