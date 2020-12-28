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
	ClientList* ptrClientList;  //��������� �� �������
	ClientInputScreen* ptrClientInputScreen;  //��������� �� ���� �������
	IncomeList* ptrIncomeList;  //��������� �� ���������
	IncomeInputScreen* ptrIncomeInputScreen;  //��������� �� ���� ���������
	ExpenseList* ptrExpenseList;  //��������� �� �������
	ExpenseInputScreen* ptrExpenseInputScreen;  //��������� �� ���� �������
	AnnualReport* ptrAnnualReport;  //��������� �� ������� ������
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact(); //������� ������� �������
};

#endif
