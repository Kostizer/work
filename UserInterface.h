#ifndef USERINTERFACE_H   
#define USERINTERFACE_H  
#include "AnnualReport.h"
#include "ExpenseInputScreen.h"
#include "ExpenseList.h"
#include "IncomeInputScreen.h"
#include "IncomeList.h"
#include "ClientInputScreen.h"
#include "ClientList.h"

class UserInterface
{
private:
	ClientList* ptrClientList;  //указатель на клиента
	ClientInputScreen* ptrClientInputScreen;  //указатель на ввод клиента
	IncomeList* ptrIncomeList;  //указатель на заработок
	IncomeInputScreen* ptrIncomeInputScreen;  //указатель на ввод заработка
	ExpenseList* ptrExpenseList;  //указатель на расходы
	ExpenseInputScreen* ptrExpenseInputScreen;  //указатель на ввод расхода
	AnnualReport* ptrAnnualReport;  //указатель на годовой расчёт
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact(); //главная рабочая область
};

#endif
