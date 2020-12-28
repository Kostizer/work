#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "IncomeList.h"
#include "ExpenseList.h"

class AnnualReport // ����� �������� ������
{
private:  	IncomeList* ptrInc;  //������ ���������   
			ExpenseList* ptrER;  //������ ��c�����
			float expenses; //����� ��������
			float inc; //����� ���������

public:  AnnualReport(IncomeList*, ExpenseList*);
		 void display();  //����� �������� ������
};
#endif