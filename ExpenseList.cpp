#include "stdafx.h" 
#include "ExpenseList.h" 

ExpenseList::~ExpenseList()
{
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete *iter;
		vectPtrsExpenses.erase(iter);
	}
}

void ExpenseList::insertExp(Expense* ptrExp)   //добавление в список расходов
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseList::display()      //отображение на экране данных о расходах          
{
	cout << "\nКатегория, Получатель, Дата, Сумма:\n";
	cout << " \n ";
	if (vectPtrsExpenses.size() == 0)
		cout << "Записей по расходам не обнаружено" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{
			cout << (*iter)->category << ", " << (*iter)->payee << ", " << (*iter)->dateOfPayment << ", " << (*iter)->amount << " Р."  << endl;
			iter++;
		}
		cout << endl;
	}
}

float ExpenseList::getAllExpenses()   //подсчёт всех расходов
{
	float AllExpenses = 0;
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "Записей по расходам не обнаружено";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		cout << ((*iter)->category) << ", " << ((*iter)->amount) << endl;
		AllExpenses += (*iter)->amount;
		iter++;
	}
	return AllExpenses;
}
