#include "stdafx.h" 
#include "AnnualReport.h" 

AnnualReport::AnnualReport(IncomeList* pInc, ExpenseList* pER) : ptrInc(pInc), ptrER(pER)
{
}

void AnnualReport::display()  //����������� ������ �� ������
{
	cout << "������� �����|\n_____________|" << endl;
	cout << "\n_____________" << endl;
	cout << "������       |\n_____________|\n" << endl;
	cout << "���������:";
	inc = ptrInc->getSumOfIncome();
	cout << inc << " �." << endl;
	cout << "\n_____________\n";
	cout << "�������      |" << endl;
	cout << "_____________|\n";
	cout << "\n____________________\n";
	cout << "���������, ���������|\n";
	cout << "____________________|\n" << endl;
	expenses = ptrER->getAllExpenses();
	cout << "\n";
	cout << "\n_____________\n";
	cout << "����� �������:";
	cout << expenses << " �." << endl;
	cout << "\n________________\n";
	cout << "�������� �������|" << endl;
	cout << "________________|\n" <<endl;
	cout << "�������:" << (inc - expenses) << " �." << endl;
}
