#ifndef EXPENSEINPUTSCREEN_H   
#define EXPENSEINPUTSCREEN_H  
#include "ExpenseList.h"

class ExpenseInputScreen //класс экрана ввода расходов
{
private:
	ExpenseList* ptrExpenseList; //указатель на список расходов
public:
	ExpenseInputScreen(ExpenseList*);
	void inputExpense(); //ввод расходов
};

#endif 
