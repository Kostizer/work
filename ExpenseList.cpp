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

void ExpenseList::insertExp(Expense* ptrExp)   //���������� � ������ ��������
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseList::display()      //����������� �� ������ ������ � ��������          
{
	cout << "\n���������, ����������, ����, �����:\n";
	cout << " \n ";
	if (vectPtrsExpenses.size() == 0)
		cout << "������� �� �������� �� ����������" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{
			cout << (*iter)->category << ", " << (*iter)->payee << ", " << (*iter)->dateOfPayment << ", " << (*iter)->amount << " �."  << endl;
			iter++;
		}
		cout << endl;
	}
}

float ExpenseList::getAllExpenses()   //������� ���� ��������
{
	float AllExpenses = 0;
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "������� �� �������� �� ����������";
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
