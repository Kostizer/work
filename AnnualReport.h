#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "IncomeList.h"
#include "ExpenseList.h"

class AnnualReport // Класс годового отчета
{
private:  	IncomeList* ptrInc;  //записи заработка   
			ExpenseList* ptrER;  //записи раcходов
			float expenses; //сумма расходов
			float inc; //сумма заработка

public:  AnnualReport(IncomeList*, ExpenseList*);
		 void display();  //вывод годового отчёта
};
#endif