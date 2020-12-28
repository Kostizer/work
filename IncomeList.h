#ifndef INCOMELIST_H   
#define INCOMELIST_H    
#include <list> 
#include "Income.h"

class IncomeList  //������ �������
{
private:
	list <Income*> setPtrsIncome;  //������ ��������� �� ���������
	list <Income*>::iterator iter; //��������
public:
	~IncomeList();
	void insertIncome(Income*);   //���������� � ������ ���������
	void display();         //����������� �� ������           
	float getSumOfIncome();   //������� ����� ���������
};

#endif  
