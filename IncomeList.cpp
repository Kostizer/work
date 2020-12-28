#include "stdafx.h" 
#include "IncomeList.h" 
using namespace std;

IncomeList::~IncomeList()
{
	while (!setPtrsIncome.empty())
	{
		iter = setPtrsIncome.begin();
		delete *iter;
		setPtrsIncome.erase(iter);
	}
}


void IncomeList::insertIncome(Income* ptrRow) {
	setPtrsIncome.push_back(ptrRow);
}



void IncomeList::display()       //вывод заработка на экран           
{

	cout << "\nНазвание цветка, Стоимость цветка, Стоимость услуги, Общая стоимость, Дата:\n";
	cout << "\n ";
	if (setPtrsIncome.empty())
		cout << "Записей по заработку не обнаружено\n" << endl;
	else
	{
		iter = setPtrsIncome.begin();
		while (iter != setPtrsIncome.end())
		{

			cout << (*iter)->getFlower() << ", " << (*iter)->getCostOfFlower() << " Р., " << (*iter)->getCostOfService() << " Р., " << (*iter)->getCostOfFlower() + (*iter)->getCostOfService() << " Р., " << (*iter)->getDateOfPayment() << endl;
			*iter++;
		}
	}
}

float IncomeList::getSumOfIncome()  //общая сумма заработка
{
	float SumOfIncome = 0.0;
	iter = setPtrsIncome.begin();
	while (iter != setPtrsIncome.end())
	{
		SumOfIncome += (*iter)->getCostOfFlower() + (*iter)->getCostOfService();
		iter++;
	}
	return SumOfIncome;
}
