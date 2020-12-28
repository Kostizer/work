#ifndef INCOMEINPUTSCREEN_H    
#define INCOMEINPUTSCREEN_H  
#include "ClientList.h"
#include "IncomeList.h"
#include <string> 

using namespace std;
class IncomeInputScreen //класс экрана ввода доходов
{
private:
	IncomeList* ptrIncomeList; //указатель на список доходов
	string inputFlower; //ввод названия цветка
	float inputCostOfFlower; //ввод цена цветка
	float inputCostOfService; //ввод цены услуги
	string inputDateOfPayment; //ввод даты платежа
public:
	IncomeInputScreen(IncomeList* ptrInc) : ptrIncomeList(ptrInc)
	{
	}
	void inputIncome();  //ввод доходов
};
#endif
