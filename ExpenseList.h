#ifndef EXPENSELIST_H    
#define EXPENSELIST_H   
#include <vector> 
#include "Expense.h"

class ExpenseList  //класс списка расходов
{
private:
	vector<Expense*> vectPtrsExpenses;  //указатель контейнер вектор на расходы
	vector<Expense*>::iterator iter; //итератор расходов
public:
	~ExpenseList();
	void insertExp(Expense*); //занесение расходов в список
	void display(); //вывод на экран
	float getAllExpenses(); // подсчёт всех расходов
};

#endif
