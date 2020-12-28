#ifndef CLIENTINPUTSCREEN_H   
#define CLIENTINPUTSCREEN_H  
#include <string> 
#include "ClientList.h"
using namespace std;

class ClientInputScreen  // экран ввода клиентов
{
private:
	ClientList* ptrClientList; //указатель на список клиентов
	string addName;     //Фамилия и инициалы 
	string addFlower; //Цветок
	string addService; //Услуга
	string addDate; //Дата обращения
public:
	ClientInputScreen(ClientList* ptrCL) : ptrClientList(ptrCL)
	{
	}
	void setClient(); //ввод клиента
};
#endif 
