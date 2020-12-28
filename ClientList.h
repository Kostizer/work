#ifndef CLIENTLIST_H   
#define CLIENTLIST_H  
#include <list> 
#include "Client.h"

class ClientList //список клиентов
{
private:
	list <Client*> setPtrsClients;   // контейнер список клиентов
	list <Client*>::iterator iter; //итератор

public:  ~ClientList();
		 void insertClient(Client*); //внесение клиента в список
		 void display();    //отображение на экране      
};

#endif