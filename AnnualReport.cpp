#include "stdafx.h" 
#include "AnnualReport.h" 

AnnualReport::AnnualReport(IncomeList* pInc, ExpenseList* pER) : ptrInc(pInc), ptrER(pER)
{
}

void AnnualReport::display()  //отображение данных на экране
{
	cout << "Годовой отчет|\n_____________|" << endl;
	cout << "\n_____________" << endl;
	cout << "Доходы       |\n_____________|\n" << endl;
	cout << "Заработок:";
	inc = ptrInc->getSumOfIncome();
	cout << inc << " Р." << endl;
	cout << "\n_____________\n";
	cout << "Расходы      |" << endl;
	cout << "_____________|\n";
	cout << "\n____________________\n";
	cout << "Категория, Стоимость|\n";
	cout << "____________________|\n" << endl;
	expenses = ptrER->getAllExpenses();
	cout << "\n";
	cout << "\n_____________\n";
	cout << "Общие расходы:";
	cout << expenses << " Р." << endl;
	cout << "\n________________\n";
	cout << "Итоговая прибыль|" << endl;
	cout << "________________|\n" <<endl;
	cout << "Прибыль:" << (inc - expenses) << " Р." << endl;
}
