#ifndef EXPENSE_H  
#define EXPENSE_H   
#include <string> 
using namespace std;

class Expense //класс расходов
{
public:
	string category;   //категория услуги  
	string payee;    //кому платим (арендадатели, коммунальщики)        
	string dateOfPayment;  //когда произведена оплата
	float amount;   //сколько оплачено
	Expense(){}
	Expense(string c, string p, string d, float a) : category(c), payee(p), dateOfPayment(d), amount(a)
	{
	}
};
#endif
