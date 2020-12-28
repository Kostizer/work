#include "stdafx.h" 
#include "ExpenseInputScreen.h" 

ExpenseInputScreen::ExpenseInputScreen(ExpenseList* per) : ptrExpenseList(per)
{
}

void ExpenseInputScreen::inputExpense()  //экран ввода расходов
{

	string category, payee, dateOfPayment;
	float amount;
	cout << "Введите категорию расходов (Расчёт по счетам, Закупка товара): ";
	getaLine(category);
	cout << "Введите поставщика услуг (ТЦ Пионер, ЖКХ): ";
	getaLine(payee);
	cout << "Введите дату платежа (24.11.2020): ";
	getaLine(dateOfPayment);
	cout << "Введите сумму в рублях(5555): ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(category, payee, dateOfPayment, amount);
	ptrExpenseList->insertExp(ptrExpense);
}
