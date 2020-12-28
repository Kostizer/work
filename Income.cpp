#include "stdafx.h" 
#include "Income.h" 

Income::Income(string f, float cOF, float cOS, string dOP) : flower(f), costOfFlower(cOF), costOfService(cOS), dateOfPayment(dOP)
{
}
string Income::getFlower()  // ����� ��������� �������� ������                      
{
	return flower;
}

string Income::getDateOfPayment()  // ����� ��������� ���� ������
{
	return dateOfPayment;
}

float Income::getCostOfFlower()  // ����� ��������� ��������� ������  
{
	return costOfFlower;
}

float Income::getCostOfService()  // ����� ��������� ��������� ������       
{
	return costOfService;
}
