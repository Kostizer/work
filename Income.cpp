#include "stdafx.h" 
#include "Income.h" 

Income::Income(string f, float cOF, float cOS, string dOP) : flower(f), costOfFlower(cOF), costOfService(cOS), dateOfPayment(dOP)
{
}
string Income::getFlower()  // Метод получения названия цветка                      
{
	return flower;
}

string Income::getDateOfPayment()  // Метод получения даты оплаты
{
	return dateOfPayment;
}

float Income::getCostOfFlower()  // Метод получения стоимости цветка  
{
	return costOfFlower;
}

float Income::getCostOfService()  // Метод получения стоимости услуги       
{
	return costOfService;
}
