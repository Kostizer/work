#include "stdafx.h" 
#include "IncomeInputScreen.h" 

void IncomeInputScreen::inputIncome() //���������� ������ � ������ � ������
{
	cout << "������� �������� ������ (����, ����������): " << endl;
	getaLine(inputFlower);
	cout << "������� ���� ������: " << endl;
	cin >> inputCostOfFlower; cin.ignore(80, '\n');
	cout << "������� ���� ������: " << endl;
	cin >> inputCostOfService; cin.ignore(80, '\n');
	cout << "������� ���� ���������: " << endl;
	getaLine(inputDateOfPayment);
	Income* ptrIncome = new Income(inputFlower, inputCostOfFlower, inputCostOfService, inputDateOfPayment);
	ptrIncomeList->insertIncome(ptrIncome);
}
