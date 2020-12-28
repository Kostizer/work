#include "stdafx.h" 
#include "ExpenseInputScreen.h" 

ExpenseInputScreen::ExpenseInputScreen(ExpenseList* per) : ptrExpenseList(per)
{
}

void ExpenseInputScreen::inputExpense()  //����� ����� ��������
{

	string category, payee, dateOfPayment;
	float amount;
	cout << "������� ��������� �������� (������ �� ������, ������� ������): ";
	getaLine(category);
	cout << "������� ���������� ����� (�� ������, ���): ";
	getaLine(payee);
	cout << "������� ���� ������� (24.11.2020): ";
	getaLine(dateOfPayment);
	cout << "������� ����� � ������(5555): ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(category, payee, dateOfPayment, amount);
	ptrExpenseList->insertExp(ptrExpense);
}
