#ifndef INCOME_H    
#define INCOME_H   
#include <string> 


using namespace std;
class Income //����� ���������
{
private:
	string flower; //�������� ������
	float costOfFlower; //���� ������
	float costOfService; //���� ������
	string dateOfPayment;//���� ������
public:
	Income(string, float, float, string);
	string getFlower();	//�������� �������� ������
	float getCostOfFlower(); //�������� ���� ������
	float getCostOfService(); //�������� ���� ������
	string getDateOfPayment(); //�������� ���� ������
};
#endif
