#include "stdafx.h" 
#include "IncomeInputScreen.h" 

void IncomeInputScreen::inputIncome() //Добавление записи о доходе в список
{
	cout << "Введите название цветка (Роза, Хризантема): " << endl;
	getaLine(inputFlower);
	cout << "Введите цену цветка: " << endl;
	cin >> inputCostOfFlower; cin.ignore(80, '\n');
	cout << "Введите цену услуги: " << endl;
	cin >> inputCostOfService; cin.ignore(80, '\n');
	cout << "Введите дату обращения: " << endl;
	getaLine(inputDateOfPayment);
	Income* ptrIncome = new Income(inputFlower, inputCostOfFlower, inputCostOfService, inputDateOfPayment);
	ptrIncomeList->insertIncome(ptrIncome);
}
