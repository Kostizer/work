#ifndef INCOMELIST_H   
#define INCOMELIST_H    
#include <list> 
#include "Income.h"

class IncomeList  //Список доходов
{
private:
	list <Income*> setPtrsIncome;  //список указатель на заработок
	list <Income*>::iterator iter; //итератор
public:
	~IncomeList();
	void insertIncome(Income*);   //добавление в список заработка
	void display();         //отображение на экране           
	float getSumOfIncome();   //подсчёт всего заработка
};

#endif  
