#ifndef INCOMEINPUTSCREEN_H    
#define INCOMEINPUTSCREEN_H  
#include "ClientList.h"
#include "IncomeList.h"
#include <string> 

using namespace std;
class IncomeInputScreen //����� ������ ����� �������
{
private:
	IncomeList* ptrIncomeList; //��������� �� ������ �������
	string inputFlower; //���� �������� ������
	float inputCostOfFlower; //���� ���� ������
	float inputCostOfService; //���� ���� ������
	string inputDateOfPayment; //���� ���� �������
public:
	IncomeInputScreen(IncomeList* ptrInc) : ptrIncomeList(ptrInc)
	{
	}
	void inputIncome();  //���� �������
};
#endif
