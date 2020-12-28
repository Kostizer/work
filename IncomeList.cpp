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



void IncomeList::display()       //����� ��������� �� �����           
{

	cout << "\n�������� ������, ��������� ������, ��������� ������, ����� ���������, ����:\n";
	cout << "\n ";
	if (setPtrsIncome.empty())
		cout << "������� �� ��������� �� ����������\n" << endl;
	else
	{
		iter = setPtrsIncome.begin();
		while (iter != setPtrsIncome.end())
		{

			cout << (*iter)->getFlower() << ", " << (*iter)->getCostOfFlower() << " �., " << (*iter)->getCostOfService() << " �., " << (*iter)->getCostOfFlower() + (*iter)->getCostOfService() << " �., " << (*iter)->getDateOfPayment() << endl;
			*iter++;
		}
	}
}

float IncomeList::getSumOfIncome()  //����� ����� ���������
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
